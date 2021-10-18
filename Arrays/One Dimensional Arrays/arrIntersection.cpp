#include <bits\stdc++.h>
using namespace std;

int func(int arr1[], int n, int arr2[], int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr1[5] = {1, 2, 3, 4, 5};

    int m;
    cin >> m;

    int arr2[4] = {5, 7, 8};


    func(arr1, n, arr2, m);
    return 0;
}
