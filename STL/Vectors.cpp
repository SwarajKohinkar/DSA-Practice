#include<bits/stdc++.h>
using namespace std;
void Vector1() {
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
}

void Vector2() {
    vector <pair<int, int>>vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
}

void Vector3() {
    vector<int> v(5, 100);
    vector<int> v2(5);
}

void Vector4() {
    vector <int> v1(5, 20);
    vector <int> v2(v1);
}

void Vector5() {
    vector<int> v = {10, 20, 30};
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it) <<" ";
    vector<int>::iterator it1 = v.end();
    it1--;
    cout<<*(it1) <<" ";
    vector<int>::reverse_iterator it2 = v.rbegin();
    cout<<*(it2) <<" "<<"\n";
    for (auto it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" "<<"\n";
    }
}

void Vector6() {
    vector <int> v = {10, 20, 30, 40, 50};
    for (auto it = v.begin(); it != v.end(); it ++) {
        cout<<*(it)<<" ";
    }
    v.erase(v.begin()+1);
    for (auto it = v.begin(); it != v.end(); it ++) {
        cout<<*(it)<<" ";
    }
}

void Vector7() {
    vector <int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 2, 3, 10);
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    cout<<v.size();
    v.pop_back(); //Removes the last element
    // v.clear() will erase an entire vector
    //v1.swap(v2) will swap
}

int main(){
    Vector1();
    Vector2();
    Vector3();
    Vector4();
    Vector5();
    Vector6();
    Vector7();
    return 0;
}