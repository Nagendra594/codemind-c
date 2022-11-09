#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n==1)return false;
    int e=sqrt(n);
    for (int i=2 ; i<e+1 ; i++){
        if (n%i==0)return false;
    }
    return true;
}
int main(){
    int y;
    cin>>y;
    vector<int>f;
    for (int i=1 ; i<(y/2)+1 ; i++){
        if (y%i==0 and !prime(i))f.push_back(i);
    }
    f.push_back(y);
    cout<<f.size();
}