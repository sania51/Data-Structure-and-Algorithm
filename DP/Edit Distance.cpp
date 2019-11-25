#include <bits/stdc++.h>
using namespace std;

int dp[100][100];
int i, j;

int edit_distance(string s1, string s2, int l1, int l2)
{
    for(i=0; i<=l1; i++){
        for(j=0; j<=l2; j++){
            if(i==0) dp[i][j] = j;
            else if(j==0) dp[i][j] = i;
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else if (s1[i-1] != s2[j-1]) dp[i][j] = 1+min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]);
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
