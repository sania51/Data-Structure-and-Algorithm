#include <bits/stdc++.h>
using namespace std;

int arr[100];
int n;

void insertion_sort(int n)
{
    int i, j, k, temp;
    for(i=1; i<n; i++){
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertion_sort(n);
    cout << "\nsorted array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    puts("");
}
