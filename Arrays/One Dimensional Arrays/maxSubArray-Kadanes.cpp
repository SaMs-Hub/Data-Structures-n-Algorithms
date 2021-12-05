#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[50];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cs = 0;
    int ms = 0;

    // Kadane's algo logic
    for (int i = 0; i < n; i++){
        cs = cs + arr[i];
        if (cs < 0){
            cs = 0;
        }
        ms = max(cs, ms);
    }

    cout << ms;

    return 0;
}
