#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if (n == 0){
        return 1;
    }

    int smallPower = power(x, n/2);
    if (n % 2 == 0){
        return smallPower * smallPower;
    }else{
        return x * smallPower * smallPower;
    }
}

int main(){
    int x, n;
    cin >> x >> n;

    cout << power(x, n);
}
