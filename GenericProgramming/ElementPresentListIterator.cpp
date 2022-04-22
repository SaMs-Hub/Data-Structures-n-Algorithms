#include <bits/stdc++.h>
using namespace std;

template <class ForwardIterator, class T>
ForwardIterator searc(ForwardIterator start, ForwardIterator end, T key){

    while (start != end){
        if (*start == key){
            return start;
        }
        start++;
    }

    return end;
}


int main()
{
    list<int> l;

    for (int i = 0; i <= 5; i++){
        l.push_back(i);
    }

    auto it = searc(l.begin(), l.end(), 41);
    if(it == l.end()){
        cout << "Element not found";
    }else{
        cout << "Present";
    }
}
