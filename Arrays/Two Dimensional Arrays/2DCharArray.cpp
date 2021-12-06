#include <bits/stdc++.h>
using namespace std;

void display(char arr[][100], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}


int main(){
    
    char arr[100][100];
    int n;
    cin >> n;

    cin.get();
    for (int i = 0; i < n; i++){
        cin.getline(arr[i], 100);
    }


    display(arr, n);


    return 0;
}
