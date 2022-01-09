#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int n){
    if (n == 0){
        return x;
    }else{
        return gcd(n, x % n);
    }
}

int main(){
    int x, n;
    cin >> x >> n;

    cout << gcd(x, n);
    return 0;
}   
