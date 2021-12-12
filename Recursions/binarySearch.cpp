#include <bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

int binarySearch(int arr[], int n, int x,  int si, int ei){
    
    if (si > ei){
        return -1;
    }

    int mid = (si + ei)/2;

    if (arr[mid] == x){
        return mid;
    }else if (arr[mid] < x){
        return binarySearch(arr, n, x,  mid + 1, ei);
    }else{
        return binarySearch(arr, n, x, si, mid - 1);
    }

}


int main(){
    int n, x, si, ei;
    cin >> n >> x >> si;

    int arr[50];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    displayArray(arr, n);

    cout << binarySearch(arr, n, x, si, n );

    return 0;
}
