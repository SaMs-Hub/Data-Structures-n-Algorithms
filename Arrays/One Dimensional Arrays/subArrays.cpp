#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;


    int arr[4] = {1, 22, 33, 4};

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k <= j; k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}
