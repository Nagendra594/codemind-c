#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a;
    vector<int>vec;
    while (b){
        int u=b%10;
        b=b/10;
        vec.push_back(u);
    }
    reverse(vec.begin(),vec.end());
    int ans=0;
    for (int i=1 ; i<=vec.size() ; i++){
        ans+=pow(vec[i-1],i);
    }
    if (ans==a)cout<<"True";
    else cout<<"False";

}