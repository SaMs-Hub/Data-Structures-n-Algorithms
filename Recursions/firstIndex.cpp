#include <bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    
}

// problem logic
int firstIndex(int arr[], int n, int x, int si){
    if (si == n){
        return -1;
    }

    if (arr[si] == x){
        return si;
    }

    int smallOutput = firstIndex(arr, n, x, si + 1);

    if (smallOutput != -1){
        return smallOutput;
    }else{
        return -1;
    }
}

int main(){
    int n, si, x;
    cin >> n >> si >> x;

    int arr[50];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    displayArray(arr, n);

    cout << firstIndex(arr, n, x,  si);

    return 0;
}
