#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int f=pow(2,a);
    int s=pow(2,a-1);
    for(int i=0 ; i<s ; i++){
        int y=i;
        vector<int>s;
        if (y==0)s.push_back(0);
        while (y){
            int e=y%2;
            y=y/2;
            s.insert(s.begin(),e);
        }//created
        int q=s.size();
        for (int j=0 ; j<a-q ; j++){
            s.insert(s.begin(),0);
        }
        for (auto it : s){
            cout<<it;
        }
        cout<<endl;
    }//first half
    for (int i=s ; i<f ; i++){
        int y=i;
        vector<int>s;
        while (y){
            int e=y%2;
            y=y/2;
            s.insert(s.begin(),e);
        }
        for (auto it : s){
            cout<<it;
        }
        cout<<endl;
    }
}