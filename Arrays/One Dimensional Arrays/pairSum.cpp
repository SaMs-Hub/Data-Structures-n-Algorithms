#include <bits\stdc++.h>
using namespace std;

int func(int arr[], int n, int sum){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == sum){
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 5;

    func(arr, n, sum);
    return 0;
}
