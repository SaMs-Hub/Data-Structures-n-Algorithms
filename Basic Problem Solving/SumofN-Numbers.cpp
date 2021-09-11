#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
     cin >> n;
    int sum, count;
    sum = 0;
    count = 1 ;
    while (count <= n){
        sum += count;
        count = count + 1;

    }
    cout << sum << endl;
}
