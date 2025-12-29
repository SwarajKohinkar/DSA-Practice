#include<bits/stdc++.h>
using namespace std;
void pairs(){
    pair<int,int> p1 = {1,2};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,pair<int,int>> p2 = {3, {4,5}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;
    pair<pair<int,int>,pair<int,int>> arr[] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    cout<<arr[0].second.first;
    cout<<endl;
    cout<<arr[1].first.second;
}
int main(){
    pairs();
    return 0;
}
