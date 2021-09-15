1
12
123
1234


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    i = 1;
    while (i <= n){
        j = 1;
        while (j <= i){
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
----------------
1
23
345
4567


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    while (i <= n){
        j = 1;
        p = i;
        while (j <= i){
            cout << p;
            j += 1;
            p += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
    
----------------
1
23
456
78910


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    p = i;
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            cout << p;
            j += 1;
            p += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
----------------
*
**
***
****


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            cout << '*';
            j += 1;
            p += 1;
        }
        cout << endl;
        i += 1;
    }
}
