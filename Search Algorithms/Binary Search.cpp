#include <bits/stdc++.h>
using namespace std;

int arr[100];
int n, key;

int bsearch(int left, int right)
{
    int mid = (left+right)/2;
    if(left>right) return -1;
    if(key > arr[mid]) return bsearch(mid+1, right);
    else if(key < arr[mid]) return bsearch(left, mid-1);
    else if(key == arr[mid]) return 1;
}
int main()
{
    int i, ans;
    cout << "array size: ";
    cin >> n;
    cout << "\narray elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "\nsearching for: ";
    cin >> key;
    ans = bsearch(0, n-1);
    if(ans != 1) cout << "\nnot found\n";
    else cout << "\nfound\n";
}
