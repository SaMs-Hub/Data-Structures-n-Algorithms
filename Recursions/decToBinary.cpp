#include <bits/stdc++.h>
using namespace std;

int decToBin(int n){
    if (n == 0){
        return 0;
    }
    
    int output = decToBin(int(n/2));
    return n % 2 + 10 * output;
    
    
}

int main(){
    int n;
    cin >> n;

    cout << decToBin(n);
}
