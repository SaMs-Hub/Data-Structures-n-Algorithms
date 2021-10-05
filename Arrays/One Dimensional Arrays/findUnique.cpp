#include <bits/stdc++.h>
using namespace std;

void findUnique(int arr[], int n){
    int ele = arr[0];
    for (int i = 1; i <= n; i++){
        
        //logic
        ele = ele ^ arr[i];
    }

    cout << ele;
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
