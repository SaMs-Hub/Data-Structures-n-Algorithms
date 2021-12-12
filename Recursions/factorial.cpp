#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n == 0){
        return 1;
    }

    int smallOutput = fact(n - 1);
    int output = n * smallOutput;
    
    return output;
}

int main(){
    int n;
    cin >> n;

    cout << fact(n);


    return 0;
}
