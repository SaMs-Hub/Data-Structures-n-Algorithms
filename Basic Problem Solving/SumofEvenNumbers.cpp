#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum, count;
    cin >> n;
    sum = 0;
    count = 1;
    while (count <= n){
        
        //logic
        if (count % 2 == 0){
            sum += count;
        }
        count += 1;

    }

    cout << sum << endl;
}
