#include<bits/stdc++.h>
using namespace std;
int lcm(int n, int m){
    int t=1;
    int i=2;
    while (n>=i and m>=i){
        if (n%i==0 and m%i==0){
            n=n/i;
            m=m/i;
            t=t*i;
        }
        else i+=1;
    }
    return t*n*m;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}