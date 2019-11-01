#include<bits/stdc++.h>
using namespace std;

#define max 1000
int dp[max][max];
int row[max], col[max];
bool visited[max][max];

int chain(int begin, int end)
{
    if(begin>=end) return 0;
    if(visited[begin][end]) return dp[begin][end];
    int mid, ans = 1<<30;
    for(mid=begin; mid<end; mid++){
        int left_opr = chain(begin, mid);
        int right_opr = chain(mid+1, end);
        int opr_to_multiply_left_and_right = row[begin]*col[mid]*col[end];
        int total = left_opr + right_opr + opr_to_multiply_left_and_right;
        ans = min(ans, total);
    }
    visited[begin][end] = 1;
    dp[begin][end] = ans;
    return dp[begin][end];
}

int main()
{
    int n, i;
    cin >> n;
    for(i=0; i<n; i++) cin >> row[i] >> col[i];
    cout << chain(0, n-1) << endl;
}
