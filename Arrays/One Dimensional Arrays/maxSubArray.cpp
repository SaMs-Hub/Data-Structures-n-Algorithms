#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;


    int arr[5] = {1, 7, -4,-3, 8};

    int currSum = 0;
    int maxSum = 0;

    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            currSum = 0;
            for (int k = i; k <= j; k++){
                currSum += arr[k];
                
            }
            if (currSum > maxSum){
                maxSum = currSum;
                left = i;
                right = j;
            }
        }
    }

    cout << maxSum << endl;

    for (int k = left ; k <= right; k++ ){
        cout << arr[k] << " , ";
    }
    return 0;
}
