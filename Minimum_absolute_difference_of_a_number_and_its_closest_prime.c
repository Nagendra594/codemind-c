#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n==1)return false;
    int y=sqrt(n);
    for (int i=2 ; i<y+1 ; i++){
        if (n%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    vector<int>v;
    for (int i=1 ; i<t*2 ; i++){
        if (prime(i))v.push_back(i);
    }
    vector<int>q;
    for (auto it : v){
        int w=t-it;
        q.push_back(w);
        if (w<0)break;
    }//created
    int r=q[q.size()-1];
    int l=q[q.size()-2];
    if (r<0)r=r-(r)-(r);
    if (r>l)cout<<l;
    else cout<<r;
}