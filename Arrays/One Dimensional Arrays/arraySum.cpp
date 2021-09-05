#include <bits/stdc++.h>
using namespace std;

void arrSum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += arr[i];
    }
    cout << sum;
}

int main(){
    int n;
    cin >> n;

    int arr[50];
    for (int i = 0; i <= n; i++){
        cin >> arr[i];
    }

    arrSum(arr, n);
}