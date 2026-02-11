#include<bits/stdc++.h>
using namespace std;
void add3(int &num) {
    cout<<num<<endl;
    num += 3;
    cout<<num<<endl;
    num += 3;
    cout<<num<<endl;
}
int main() {
    int num = 3;
    add3(num);
    cout<<num<<endl;
    return 0;
}