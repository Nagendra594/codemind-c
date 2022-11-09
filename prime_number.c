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
    int y;
    cin>>y;
    if (prime(y))cout<<"prime";
    else cout<<"not a prime";
}