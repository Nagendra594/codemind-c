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
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int s,a,b,n;
        cin>>s>>a>>b>>n;
        int k=lcm(a,b);
        int c=(s/a)+(s/b);
        c-=(s/k);
        if (c>=n)cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
}