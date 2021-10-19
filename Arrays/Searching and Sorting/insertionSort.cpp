#include <bits\stdc++.h>
using namespace std;

void func(int arr[], int n){
    for (int i = 1; i < n; i++){
        int e = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > e){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = e;
    }
}

int main(){
    int n = 5;
    int arr[5] = {5, 4, 3, 1, 2};

    func(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    return 0;
}
