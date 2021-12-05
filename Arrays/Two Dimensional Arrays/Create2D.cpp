#include <bits/stdc++.h>
using namespace std;


int main(){

    int arr[50][50];

    int m, n;
    cin >> m >> n;

    int val = 11;
    for (int i = 0; i <= m - 1; i++){
        for (int j = 0; j <= n - 1; j++){
            arr[i][j] = val;
            val += 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
