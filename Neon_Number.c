#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
    int y;
    cin>>y;
    int s=y*y;
    int d=s;
    vector<int>v;
    while (d){
    int z=d%10;
    d=d/10;
    v.push_back(z);
    }
    int ans=0;
    for (auto it : v){
        ans+=it;}
    if (ans==y) cout<<"Neon Number";
    else cout<<"Not Neon Number";
}