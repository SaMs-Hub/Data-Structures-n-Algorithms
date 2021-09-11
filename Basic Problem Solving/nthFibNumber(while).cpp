#include <bits/stdc++.h>
using namespace std;

int main(){
    int counter, first, second, temp, n;
    cin >> n;
    counter = 1;
    first = 1;
    second = 1;
    while (counter < n){
        temp = first + second;
        first = second;
        second = temp;
        counter += 1;
    }
    cout << first << endl;
}
