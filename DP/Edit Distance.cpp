#include <bits/stdc++.h>
using namespace std;

int dp[100][100];
int i, j;

int edit_distance(string source, string destination, int l1, int l2)
{
    for(i=0; i<=l1; i++){
        for(j=0; j<=l2; j++){
            // if source is empty then insert all characters of destination
            if(i==0) dp[i][j] = j;
            // if destination is empty then delete all characters of destination
            else if(j==0) dp[i][j] = i;
            /* dp[][] will be diagonal value coz no need to convert same char
            diagonal value means edit distance for edit distance without that char */
            if(source[i-1] == destination[j-1]) dp[i][j] = dp[i-1][j-1];
            // consider all possibilities and take min
            else if (source[i-1] != destination[j-1]) dp[i][j] = 1+min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]);
        }
    }
    return dp[l1][l2];
}

int main()
{

    string s1, s2;
    cout << "source string: ";
    cin >> s1;
    cout << "\ndestination string: ";
    cin >> s2;
    cout << "\nedit distance: " << edit_distance(s1, s2, s1.length(), s2.length()) << endl;

    return 0;
}
