#include<bits/stdc++.h>
using namespace std;
int e(int y){
    vector<int>v;
    for (int i=0 ; i<=y ; i++){
        int p=pow(2,i);
        v.push_back(p);
    }
    for (auto it : v){
        if (it==y)return 0;
    }
    vector<int>q;
    for (auto it : v){
        int o=y-it;
        if (o<0)o=o-(o)-(o);
        q.push_back(o);
    }
    return *min_element(q.begin(),q.end());
}
int main(){
    int y;
    cin>>y;
    cout<<e(y);
    
}