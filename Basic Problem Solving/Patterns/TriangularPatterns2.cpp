1
22
333
4444

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
------------------

1
21
321
4321


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            cout << i - j + 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
------------------

1
11
121
1221
12221


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            if ((j == 1) || (j == i)){
                cout << '1';
            }else{
                cout << '2';
            }
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
------------------

1
11
202
3003
40004


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= i){
            if ((j == 1) || (j == i)){
                if ( i - 1 == 0){
                    cout << '1';
                }else{
                    cout << i - 1;
                }
            }else{
                cout << '0';
            }
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
    
    
 ------------------

12345
1234
123
12
1

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    
    while (i <= n){
        j = 1;
        
        while (j <= n - i + 1){
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
