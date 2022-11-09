#include<bits/stdc++.h> 
using namespace std; 
bool pal(int n){
    string s ;
    stringstream sso;
    sso<<n;
    sso>>s;
    string w=s;
    reverse(s.begin(),s.end());
    if (w==s) return true;
    else return false;
}
int main(){
    int z;
    cin>>z;
    vector<int>v;
    int i=1;
    while(1){
    if (pal(z+i)){
        v.push_back(i);
        break;
        }
    else i+=1;
    }
    int j=1;
    while(1){
    if (pal(z-j)){
        v.push_back(j);
        break;
        }
    else j+=1;
    }
    if (v[0]==v[1]) cout<<z-v[1]<<" "<<z+v[0];
    else if (v[0]>v[1])cout<<z-v[1];
    else if (v[0]<v[1])cout<<z+v[0];
}