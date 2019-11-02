#include <bits/stdc++.h>
using namespace std;

int arr[100];
int n;

void selection_sort(int n)
{
    int i, j, k, imin;
    for(i=0; i<n-1; i++){
        imin = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[imin]) imin = j;
        }
        swap(arr[i], arr[imin]);
        /*for(k=0; k<n; k++) cout << arr[k] << " ";
        puts("");*/ /// to print every step
    }
}
int main()
{
    int i, ans;
    cout << "array size: ";
    cin >> n;
    cout << "\narray elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    selection_sort(n);
    cout << "\nsorted array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    puts("");
}
