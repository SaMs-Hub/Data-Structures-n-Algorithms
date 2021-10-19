#include <bits\stdc++.h>
using namespace std;

int func(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 5;

    cout << func(arr,n, key);

    return 0;
}
