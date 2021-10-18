#include <bits/stdc++.h>
using namespace std;

void findUnique(int arr[], int n){
    arr[1, n, 2] = arr[,n,2];
    cout << arr;
}


int main(){
    int n;
    cin >> n;

    int arr[50];

    //taking array as input
    for (int i = 0; i <= n; i++){
        cin >> arr[i];
    }

    findUnique(arr, n);
}