#include<bits/stdc++.h>
using namespace std;
void List() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(5);
    ls.push_front(1);
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout<<*(it)<<" ";
    }
}

int main() {
    List();
    return 0;
}