#include <iostream>
using namespace std;


int main(){
    int n, rev, l, nClone;
    
    rev = 0;
    cin >> n;
    nClone = n;
    while (n > 0){
        l = n % 10;
        n = n / 10;
        rev = rev * 10 + l;
    }

    // checking condition for palindrome
    
    if (nClone == rev){
        cout << rev << " It is Palindrome" << endl;
    }else{
        cout << rev << " Not a Palindrome" << endl;
    }
}
