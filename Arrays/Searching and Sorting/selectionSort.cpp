#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n){
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex  = j;
            }
        }swap(arr[i], arr[minIndex]);
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
