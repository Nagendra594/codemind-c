#include<bits/stdc++.h>
using namespace std;
bool help(int n){
    for (int i=1 ; i<n ; i++){
        if (i*i==n)return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    for (int i=0 ; i<t; i++){
        int y;
        cin>>y;
        if (help(y))cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
}