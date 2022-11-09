#include<bits/stdc++.h> 
using namespace std; 
int main(){
    string q;
    int n;
    cin>>q>>n;
    string f=q.substr(0,n);
    string s=q.substr(q.length()-n,q.length()-1);
    cout<<abs(stoi(f)-stoi(s));
    
}