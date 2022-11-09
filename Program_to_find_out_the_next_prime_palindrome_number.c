#include<bits/stdc++.h>
using namespace std;
bool help(vector<int>a){
    vector<int>w=a;
    reverse(a.begin(),a.end());
    if (a==w)return true;
    else return false;
}
bool prime(int w){
    if (w==1)return false;
    int e=sqrt(w);
    for (int i=2 ; i<e+1 ; i++){
        if (w%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    n+=1;
    while(1){
        int q=n;
        vector<int>vec;
        while(q){
            int u=q%10;
            q=q/10;
            vec.push_back(u);
        }
        if (help(vec) and prime(n)){cout<<n;break;}
        else n+=1;
        
    }
}