#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if ((n == 1) or (n == 2)){
        return 1;
    }
    int fibN1 = fib(n - 1);
    int fibN2 = fib(n - 2);

    return fibN1 + fibN2;
}

int main(){
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}
