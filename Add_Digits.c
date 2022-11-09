#include<bits/stdc++.h>
using namespace std;
int help(int n){
    vector<int>v;
    while (n){
        int q=n%10;
        n=n/10;
        v.push_back(q);
    }
    int count=0;
    for (auto it : v){
        count+=it;
    }
    if (count>=10)return help(count);
    else return count;
}

int main(){
    int a;
    cin>>a;
    cout<<help(a);
}