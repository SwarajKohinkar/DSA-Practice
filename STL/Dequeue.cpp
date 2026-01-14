#include<bits/stdc++.h>
using namespace std;
void Deque(){
    deque<int>dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);
    dq.emplace_back(100);
    dq.pop_back();
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout<<*(it)<<" ";

    }
}
int main(){
    Deque();
    return 0;
}