ABCD
ABCD
ABCD
ABCD



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i = 1;
    while (i <= n){
        j = 1;
        while (j <= n){
            char ch = 'A' + j - 1;
            cout << ch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    

-----------------

ABCD
BCDE
CDEF
DEFG


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i = 1;
    while (i <= n){
        j = 1;
        char start = 'A' + i - 1;
        while (j <= n){
            char ch =  start + j - 1;
            cout << ch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}

    
-----------------

A
BB
CCC
DDDD

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i = 1;
    while (i <= n){
        j = 1;
        char start = 'A' + i - 1;
        while (j <= i){
            cout << start;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}

          
