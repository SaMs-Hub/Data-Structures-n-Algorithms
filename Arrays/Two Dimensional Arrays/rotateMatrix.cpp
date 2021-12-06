#include <bits/stdc++.h>
using namespace std;

void display(int arr[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(int arr[][100], int  n){

    //reverse each row
    for (int i = 0; i < n; i++){
        int startCol = 0;
        int endCol = n - 1;
        while (startCol < endCol){
            swap(arr[i][startCol], arr[i][endCol]);
            startCol += 1;
            endCol -= 1;
        }
    }

    //transpose
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n; j++){
            if (i < j){
            swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

int main(){
    
    int arr[100][100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }


    rotate(arr, n);
    display(arr, n);


    return 0;
}
