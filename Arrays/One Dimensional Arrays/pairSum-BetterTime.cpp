#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {1, 3, 5};
    int s = 4;

    int i = 0;
    int j = sizeof(arr)/sizeof(int) - 1;

    while (i < j){
        int currSum = arr[i] + arr[j];
        if (currSum> s){
            j--;
        }else if(currSum < s){
            i--;
        }else if(currSum == s){
            cout << arr[i] << ',' << arr[j] << endl;
            i++;
            j--;
        }
    }


    return 0;
}
