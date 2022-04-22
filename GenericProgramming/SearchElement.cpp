#include <bits/stdc++.h>
using namespace std;

template<typename T>
int search(T arr[], int n, T x){
    // traversing through the arr
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}


int main()
{
    float arr[] = {1.1, 2.1, 3.1, 4.1, 5.1};
    int n = 5;

    cout << search(arr, n, float(2.1));
    return 0;
}
