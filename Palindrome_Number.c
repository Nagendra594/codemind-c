#include<bits/stdc++.h>
using namespace std;
string ans(vector<int>v,vector<int>q){
    reverse(v.begin(),v.end());
    if (v==q)return "True";
    else return "False";
}
int main(){
    int u;
    cin>>u;
    for (int i=0 ; i<u ; i++){
    int t;
    cin>>t;
    vector<int>c;
    while (t){
        int y=t%10;
        t=t/10;
        c.push_back(y);
    }
    cout<<ans(c,c)<<endl;
}
}