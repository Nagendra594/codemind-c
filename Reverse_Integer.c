#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s;
    cin>>s;
    vector<int>vec;
    if (s<0){//-120
        int e=s+(-s-s);
        int i=0;
        while(e){
            int y=e%10;
            e=e/10;
            if (y==0 and i<=0)continue;
            else vec.push_back(y);
        }
        cout<<"-";
        for (auto it : vec){
            cout<<it;
        }
    }
    else{
        int i=0;
        while(s){
            int y=s%10;
            s=s/10;
            if (y==0 and i<=0){i+=1;continue;}
            else vec.push_back(y);
    }
    for (auto it : vec){
        cout<<it;
        }
    }
}   