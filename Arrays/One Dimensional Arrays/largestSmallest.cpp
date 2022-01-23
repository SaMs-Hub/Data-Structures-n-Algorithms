// using standard
#include <bits/stdc++.h>
using namespace std;

int fuction(int arr[], int n){
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i <= n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i] < smallest){
            smallest = arr[i];
        }


    }

    cout << largest << smallest << endl;
    return 0;
}

int main(){
    int n;
    cin >> n;

    int arr[] = {1, 2, 3, 4, 5};

    cout << fuction(arr, n);

}


// using language tools
#include <bits/stdc++.h>
using namespace std;

int fuction(int arr[], int n){
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i <= n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i] < smallest){
            smallest = arr[i];
        }


    }

    cout << largest << smallest << endl;
    return 0;
}

int main(){
    int n;
    cin >> n;

    int arr[] = {1, 2, 3, 4, 5};

    cout << fuction(arr, n);

}
