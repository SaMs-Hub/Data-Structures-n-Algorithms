#include <bits/stdc++.h>
using namespace std;

void findItem(int arr[], int key, int n){

    auto it = find(arr, arr + n, key);
    int index = it - arr;

    if (index == n){
        cout << key << " not found";
    }else{
        cout << "found at " << index;
    }
}

int main(){
    int key;
    cin >> key;


    int arr[] = {1, 22, 33, 44};
    int n = sizeof(arr)/sizeof(int);

    findItem(arr, key, n);
}
