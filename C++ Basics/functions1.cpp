#include<bits/stdc++.h>
using namespace std;
int maximum(int num1, int num2){
    if (num1>=num2) {
        cout<<num1;
    }
    else {
        return num2;
    }
}
int main() {
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>> num1 >> num2;
int result = maximum(num1,num2);
cout<<result;
    return 0;
}
