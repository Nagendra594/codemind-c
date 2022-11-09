#include<bits/stdc++.h>
using namespace std;
void ans(vector<int>n, int q, int l){
    vector<string>ans;
    for(int i=0 ; i<l ; i++){
        int s=n[i]+q;
        int y=*max_element(n.begin(),n.end());
        if (y<=s)ans.push_back("True");
        else ans.push_back("False");
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
}
int main(){
    int s;
    cin>>s;
    vector<int>a;
    for (int i=0 ; i<s ; i++){
        int w;
        cin>>w;
        a.push_back(w);
    }
    int c;
    cin>>c;
    ans(a,c,s);//*max_element(a.begin(),a.end());
}