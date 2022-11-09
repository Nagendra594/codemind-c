#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<=1)return false;
    int u=sqrt(n);
    for (int i=2 ; i<u+1 ; i++){
        if (n%i==0)return false;
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    if (a<0 or prime(a))cout<<"Not Ugly Number";
    else{
    vector<int>vec;
    for (int i=2 ; i<a+1 ; i++){
        if (a%i==0){
            if (i==2 or i==3 or i==5 or !prime(i))continue;
            else {cout<<"Not Ugly Number";break;}
            }
        }
    cout<<"Ugly Number";
    }
}