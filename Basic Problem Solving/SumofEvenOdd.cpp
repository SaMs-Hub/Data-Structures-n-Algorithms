#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, evenSum, oddSum, d;
    evenSum = 0;
    oddSum = 0;
    cin >> n;
    while (n > 0){
        d = n % 10;
        if (d % 2 == 0){
            evenSum += d;
        }else{
            oddSum += d;
        }
        n /= 10;
    }
    
    // printing out
    cout << evenSum <<" " <<  oddSum  << endl;
}
