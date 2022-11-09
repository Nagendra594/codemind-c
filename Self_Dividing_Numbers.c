#include<iostream>
#include<vector>
using namespace std;
bool helper(int a){
    if (a%10==0)return false;
    int b=a;
    vector<int>ind;
    while (b){
        int y=b%10;
        b=b/10;
        if (y==0)continue;
        else ind.push_back(y);
    }
    for (auto it : ind){
        if (a%it!=0)return false;
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>ans;
    for(int i=a ; i<=b ; i++){
        if (helper(i)){ans.push_back(i);}
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
}