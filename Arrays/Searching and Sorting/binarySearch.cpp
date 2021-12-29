//cannot be used if the array is not sorted

#include <bits\stdc++.h>
using namespace std;

int func(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    while (s <= e){
        int mid = (s + e)/2;
        if (arr[mid] == key){
            return mid;
        }else if (arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 55;

    cout << func(arr,n, key);

    return 0;
}
