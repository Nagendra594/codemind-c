#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    vector<int>d;
    while(y){
       int u=y%10;
       y=y/10;
       d.push_back(u);
    }
    cout<<*max_element(d.begin(),d.end());
}