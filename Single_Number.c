#include<bits/stdc++.h> 
using namespace std;
int main(){
    int y;
    cin>>y;
    vector <int> vec;
    for (int i=0; i<y;i++){
        long t;
        cin>>t;
        vec.push_back(t);
    }
    for (auto it : vec){
        int p=count(vec.begin(),vec.end(),it);
        if(p==1)
        cout<<it;
    }
}