#include <bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

bool isSorted(int arr[], int n, int si){
    if ((si == n) or (si == n - 1)){
        return true;
    }

    if (arr[si] > arr[si + 1]){
        return false;
    }
    
    bool smallOutput = isSorted(arr, n, si + 1);
    return smallOutput; 
}
int main(){
    int n, si;
    cin >> n >> si;

    int arr[50];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    displayArray(arr, n);

    cout << isSorted(arr, n, si);
}
