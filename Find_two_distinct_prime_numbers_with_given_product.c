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
void e(vector<int>q,int n){
    if (q.size()<=1){cout<<-1;}
    else {
        vector<int>e;
        for (int i=0 ; i<q.size() ; i++){
            for (int j=i ; j<q.size() ; j++){
                if (q[i]*q[j]==n){
                    e.push_back(q[i]);
                    e.push_back(q[j]);
                }
            }
        }
        if (e.size()==0)cout<<-1;
        else cout<<e[0]<<" "<<e[1];
    }
}
int main(){
    int y;
    cin>>y;
    vector<int>c;
    for (int i=2 ; i<=y ; i++){
        if (y%i==0 and prime(i))c.push_back(i);
    }
    e(c,y);
}