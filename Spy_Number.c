#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int y=t;
    vector<int>vec;
    while(y){
        int q=y%10;
        y=y/10;
        vec.push_back(q);
    }
    int ans=0;
    int pro=1;
    for (auto it : vec){
        ans+=it;
        pro*=it;
    }
    if (ans==pro)cout<<"Spy Number";
    else cout<<"Not Spy Number";
}