#include<bits/stdc++.h>
using namespace std;
int help(int n){
    int c=0;
    for (int i=1 ; i<=(n/2) ; i++){
        if (n%i==0)c+=1;
    }
    c+=1;
    return c;
}
int main(){
    int a;
    cin>>a;
    vector<int>ans;
    for (int i=36 ; i<=a ; i++){
      int d=help(i);
      if (d==9)ans.push_back(i);
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Total="<<ans.size();
}