#include <bits\stdc++.h>
using namespace std;

int func(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << func(arr, n);
    return 0;
}
