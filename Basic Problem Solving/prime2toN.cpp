#include <bits/stdc++.h>
using namespace std;

int main(){
    // taking input
    int n, k, d;
    cin >> n;
    k = 2;

    //adding logic
    while(k < n){
        d = 2;
        bool flag = false;
        while (d < k){
            if (k % d == 0){
                flag = true;
            
            }
        d += 1;
        }
    if (!flag){
        cout << k << endl;
    }
    k += 1;
    }
}
