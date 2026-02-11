#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "Swaraj";
    int length = s.size();
    cout<<length;
    cout<<"\n";
    cout<<s[length-1];
    s[length-1] ='s';
    cout<<"\n"<<s[length-1];
    return 0;
}