#include <bits/stdc++.h>
using namespace std;

void displayArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

int lastIndex(int arr[], int n, int x, int si){
    if (si == n){
        return -1;
    }

    int smallOutput = lastIndex(arr, n, x, si + 1);

    if (smallOutput != -1){
        return smallOutput;
    }else{
        if (arr[si] == x){
            return si;
        }else{
            return -1;
        }
    }
}

int main(){
    int n, x, si;
    cin >> n >> x >> si;

    int arr[50];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    displayArr(arr, n);

    lastIndex(arr, n, x, si);


    return 0;
}
