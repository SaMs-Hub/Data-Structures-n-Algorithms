// Method 1 Using language tools

#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n){
    int largest, smallest;

    largest = INT_MIN;
    smallest = INT_MAX;

    for (int i = 0; i < n; i ++){
        
        // Using if condition to check
        if (arr[i] > largest){
            largest = arr[i];
        }

        if (arr[i] < smallest){
            smallest = arr[i];
        }


    }

    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;

}

int main(){
    
    int n, key;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    func(arr, n);
    return 0;
}

// Method 2

#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n){
    int largest, smallest;

    largest = INT_MIN;
    smallest = INT_MAX;

    for (int i = 0; i < n; i ++){
        
        // using inbuilt maths
        largest = max(largest, arr[i]);
        smallest = min(smallest, arr[i]);

    }

    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;

}

int main(){
    
    int n, key;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    func(arr, n);
    return 0;
}


// using standard way
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


