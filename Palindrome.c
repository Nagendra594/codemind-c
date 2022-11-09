#include<bits/stdc++.h>
using namespace std;
bool ans(vector<int>v,vector<int>q){
    reverse(v.begin(),v.end());
    if (v==q)return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    vector<int>c;
    while (t){
        int y=t%10;
        t=t/10;
        c.push_back(y);
    }
    if (ans(c,c))cout<<"True";
    else cout<<"False";
}