#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    char arr[1000];
    char largest[1000];

    int len = 0;
    int largestLen = 0;

    cin.get();
    for (int i = 0; i < n; i++){
        cin.getline(arr, 1000);

        len = strlen(arr);
        if (len > largestLen){
            largestLen = len;
            strcpy(largest,arr);
        }
    }

    cout << largest << " and " << largestLen;


    return 0;
}
