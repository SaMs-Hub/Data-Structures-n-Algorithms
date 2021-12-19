#include <bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

int arraySum(int arr[], int n, int si){
    if (si == n){
        return 0;
    }

    int smallerOutput = arraySum(arr, n, si + 1);
    return arr[si] + smallerOutput;
}

int main(){
    int n;
    cin >> n;

    int arr[50];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    displayArray(arr, n);

    cout << "sum: "<< arraySum(arr, n, 0);
}
