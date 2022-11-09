#include<bits/stdc++.h>
using namespace std;
int fact(int t){
    int u=1;
    for (int i=1 ; i<=t ; i++){
        u*=i;
    }
    return u;
}
int main(){
    int a;
    cin>>a;
    int b=a;
    vector<int>ind;
    while (b){
        int y=b%10;
        b=b/10;
        ind.push_back(y);
    }
    int ans=0;
    for (auto it : ind){
        ans+=fact(it);
    }
    if (ans==a)cout<<"The number "<<a<<" is a strong number";
    else cout<<"The number "<<a<<" is not a strong number";
}