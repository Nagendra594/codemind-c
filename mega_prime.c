#include<bits/stdc++.h> 
using namespace std; 
bool prime(int n){
    if (n==1) return false;
    int e=sqrt(n);
    for (int i=2 ; i<e+1 ; i++){
        if (n%i==0) return false;
    }
    return true;
}
string help(vector<int>v){
    for (auto it : v){
        if (!prime(it))return "Not Mega Prime";}
    return "Mega Prime";
    }
int main(){
    int y;
    cin>>y;
    if (!prime(y))cout<<"Not Mega Prime";
    else {
        vector<int>v;
        while(y){
            int z=y%10;
            y=y/10;
            v.push_back(z);
            } 
        cout<<help(v);
    }
}  