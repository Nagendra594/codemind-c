#include<bits/stdc++.h>
using namespace std;
int main(){
    int b;
    cin>>b;
    vector<int>ind;
    while (b){
        int y=b%10;
        b=b/10;
        if (y==0)continue;
        else ind.push_back(y);
    }
    int pro=1;
    int sum=0;
    for (auto it : ind){
        pro*=it;
        sum+=it;
    }
    cout<<pro-sum;
}