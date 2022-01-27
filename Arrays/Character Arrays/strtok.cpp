#include <bits/stdc++.h>
using namespace std;


 int main() {
    char s[100] = "checking for value is the one";
 

    char *ptr = strtok(s, " ");
    cout << ptr << endl;
    while (ptr != NULL){
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
    
    return 0;
}
