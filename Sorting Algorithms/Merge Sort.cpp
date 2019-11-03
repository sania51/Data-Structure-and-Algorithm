#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int SL = mid-left+1;
    int SR = right-mid;

    int L[SL], R[SR];

    for(i=0; i<SL; i++) L[i] = arr[left+i];
    for(j=0; j<SR; j++) R[j] = arr[mid +1+ j];

    i = j = 0;
    k = left;

    while (i < SL && j < SR){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < SL){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < SR){
        arr[k] = R[j];
        j++;
        k++;
    }

}

void merge_sort(int arr[], int left, int right)
{
    int mid;
    if(left<right){
        mid = (left+right)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
int main()
{
    int n, i;
    cout << "array size: ";
    cin >> n;
    int arr[n];
    cout << "\narray elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    merge_sort(arr, 0, n-1);
    cout << "\nsorted array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    puts("");
}
