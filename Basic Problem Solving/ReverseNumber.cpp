#include <iostream>
using namespace std;

int main(){
    int n, rev, l;
    rev = 0;
    cin >> n;
    while (n > 0){
        l = n % 10;
        n = n / 10;
        rev = rev * 10 + l;
    }
    cout << rev << endl;
}
