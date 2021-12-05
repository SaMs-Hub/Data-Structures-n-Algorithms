#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char arr[]){

    int l = strlen(arr);
    if ((l == 0) or (l == 1)){
        return ;
    }
    int prev = 0;
    for (int current = 1; current < l; current++){
        if (arr[current] != arr[prev]){
            prev++;
            arr[prev] = arr[current];
        }

    }
    arr[prev + 1] = '\0';
    return ;
}


int main(){
    char arr[100];
    cin.getline(arr, 100);

    removeDuplicates(arr);
    cout << arr << endl;
    return 0;
}
