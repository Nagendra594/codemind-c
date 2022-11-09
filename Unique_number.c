#include<bits/stdc++.h>
using namespace std;
bool help(vector<int>vec){
    for (auto it : vec){
        if (count(vec.begin(),vec.end(),it)!=1)return false;
    }
    return true;
}
int main(){
    long long s;
    cin>>s;
    vector<int>vec;
    while(s){
        int y=s%10;
        s=s/10;
        vec.push_back(y);
        }
    if (!help(vec))cout<<"Not Unique Number";
    else cout<<"Unique Number";
}