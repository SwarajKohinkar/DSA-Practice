#include<bits/stdc++.h>
using namespace std;
void pattern7(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++) {
            cout<<" ";
        }
        char ch ='A';
        int breakpt = (2*i+1)/2; 
        for(int j = 0; j<2*i+1; j++){
            cout<<ch;
            if(j<=breakpt) ch++;
            else ch--;
        }
        for(int j = 0; j<n-i-1; j++) {
            cout<<" ";
        
    }
    cout<<endl;
}
}
int main() {
    int n;
    cin>>n;
    pattern7(n);
    return 0;

}