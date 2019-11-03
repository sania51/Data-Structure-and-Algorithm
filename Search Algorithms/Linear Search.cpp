#include <bits/stdc++.h>
using namespace std;

int arr[100];
int n, i, key;

bool lsearch()
{
    for(i=0; i<n; i++){
        if(arr[i] == key) return 1;
    }
    return 0;
}
int main()
{
    cout << "array size: ";
    cin >> n;
    cout << "\narray elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "\nsearching for: ";
    cin >> key;
    if(lsearch()) cout << "\nfound\n";
    else cout << "\nnot found\n";
}
