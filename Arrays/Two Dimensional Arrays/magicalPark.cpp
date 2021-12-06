#include <bits/stdc++.h>
using namespace std;

void magicalPark(char arr[][100], int m, int n, int k, int s){
    bool success = true;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            
            char ch = arr[i][j];
            //base case
            if (s < k){
                break;
            }

            //case 1
            if (ch == '*'){
                s += 5;
            }else if(ch == '.'){
                s -= 2;
            }else{
                break;
            }
            if (j != n - 1){
                s -= 1;
            }
        }
    }
    if (success){
        cout << "Yes, won with strength remaining - " << s << endl;
    }else{
        cout << "Lost" << endl;
    }
}

int main(){
    int m, n, k, s;
    cin >> m >> n >> k >> s;

    char park[100][100];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> park[i][j];
        }
    }

    magicalPark(park, m, n, k, s);



    return 0;
}
