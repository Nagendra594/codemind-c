#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    int i=2;
    vector<int>vec={0,1};
    while (i<y){
        vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
        i+=1;
    }
    vector<int>w;
    for (auto it: vec){
        int q=y-it;
        w.push_back(q);
        if (q<=0)break;
    }//10 9 9 8 7 5 2 -3
    int r=w[w.size()-1];
    int l=w[w.size()-2];
    if (r<0)r=r-(r)-(r);
    if (r==l)cout<<y-l<<" "<<r+y;
    else if (l>r)cout<<r+y;
    else if (l<r)cout<<y-l;

}