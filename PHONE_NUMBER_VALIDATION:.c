#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s.substr(0,1)=="0" or s.length()!=10)cout<<"Invalid";
    else cout<<"Valid";
}