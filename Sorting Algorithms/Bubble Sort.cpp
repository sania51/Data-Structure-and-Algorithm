#include <bits/stdc++.h>
using namespace std;

int arr[100];
int n, key, x, y;

void bsort(int n)
{
    int i, j, k;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
            /*for(k=0; k<n; k++) cout << arr[k] << " ";
            puts("");*/ /// to see every steps non-comment this
        }
        //puts("");
    }
}
int main()
{
    int i, ans;
    cout << "array size: ";
    cin >> n;
    cout << "\narray elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    bsort(n);
    cout << "\nsorted array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    puts("");
}
