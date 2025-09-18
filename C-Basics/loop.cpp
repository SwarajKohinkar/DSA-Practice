#include<bits/stdc++.h>
using namespace std;

void solveProblem(int arr[], int n) {
    arr[0] += 100;   // modifies arr[0]
    cout<<"Value inside function: "<<arr[0]<<endl;
}

int main() {
    int n = 5;
    int arr[n];

    cout << "Enter 5 elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    solveProblem(arr, n);

    cout<<"Value inside main function: "<<arr[0]<<endl;

    return 0;
}
