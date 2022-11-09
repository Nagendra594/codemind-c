#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n==1)return false;
    int y=sqrt(n);
    for (int i=2 ; i<y+1 ; i++){
        if (n%i==0)return false;
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    while (1){
        if (prime(a+b+i)){
            cout<<i;
            break;
        }
        else i+=1;
    }
}