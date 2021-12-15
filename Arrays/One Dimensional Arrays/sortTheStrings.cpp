#include <bits/stdc++.h>
using namespace std;

string extract(string str, int key){

    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1){
        s = strtok(NULL, " ");
        key --;
    }
    return (string)s;
}

int convertToInt(string str){
    int ans = 0;
    int p = 1;
    for (int i = str.length() - 1; i>= 0; i--){
        ans += ((str[i] - '0') * p);
        p *= 10;
    }
    return ans;
}


// problem logic for comparing
bool numericCompare(pair <string, string>s1, pair <string, string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexioCompare(pair <string, string> s1, pair <string, string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}

int main(){
    int n;
    cin >> n;

    cin.get();

    string arr[1000];
    for (int i = 0; i < n; i++){
        getline(cin, arr[i]);
    }

    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;

    pair <string, string> strPair[100];

    for (int i = 0; i < n; i++){
        strPair[i].first = arr[i];
        strPair[i].second = extract(arr[i], key);
    }

    if (ordering == "numeric"){
        sort(strPair, strPair + n, numericCompare);
    }else{
        sort(strPair, strPair + n, lexioCompare);
    }

    if (reversal == "true"){
        for (int i = 0; i < n/2; i++){
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    for (int i = 0; i < n; i++){
        cout << strPair[i].first << endl;
    }

    
    return 0;
}
