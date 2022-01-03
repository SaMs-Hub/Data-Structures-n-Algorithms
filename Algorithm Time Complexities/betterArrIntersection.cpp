// for O(n2)


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int arrInter(int arr1[], int arr2[], int n1, int n2){
    std::vector <int> arr;
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++){
            if (arr1[i] == arr2[j]){
                arr.push_back(arr1[i]);
            }
        }
    }
    int n = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < n; i++ ){
        return arr[i];
    }
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 3, 6, 7};

    cout << arrInter(arr1, arr2, n1, n2);


}
