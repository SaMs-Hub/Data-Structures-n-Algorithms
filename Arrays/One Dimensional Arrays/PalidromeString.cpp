#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char arr[]){
    int i = 0;
    int j = strlen(arr) - 1;

    while (i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }else{
            return false;
        }
        
    }
    return true;
}



int main(){
     
     char arr[100];
     cin.getline(arr, 100);

     if (isPalindrome(arr)){
         cout << "Palindromic String";
     }else{
         cout << "Not a Palindrome";
     }

    return 0;
}
