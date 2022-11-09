#include<bits/stdc++.h>
using namespace std;
int main(){
    int z;
    cin>>z;
    vector<int>vec;
    for (int i=0 ; i<z ; i++){
        int t;
        cin>>t;
        vec.push_back(t);
    } 
    for (int i=vec[0] ; i>0 ; i--){
        int c=0;
        for (auto it : vec){
            if (it%i==0){c++;}
        }
        if (c==vec.size()){
        cout<<i;
        break;}
    }
}