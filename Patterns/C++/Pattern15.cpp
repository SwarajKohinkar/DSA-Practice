#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i = n; i>=0; i--){
        for( char ch = 'A'; ch<= 'A' + i; ch++) {
            cout<<ch<<" ";

        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    pattern14(n);
    return 0;
    
}