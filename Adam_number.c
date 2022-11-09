#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    int l=y*y;//144
    string revy="";
    stringstream sso;
    sso<<y;
    sso>>revy;//"12"
    reverse(revy.begin(),revy.end());//"21"
    int yy=stoi(revy);//21
    int ll=yy*yy;//441
    string revq="";
    stringstream ssd;
    ssd<<ll;
    ssd>>revq;//"441"
    reverse(revq.begin(),revq.end());//"144"
    int last =stoi(revq);
    if (last==l)cout<<"True";
    else cout<<"False";

}