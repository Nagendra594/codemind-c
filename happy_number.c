#include<bits/stdc++.h>
using namespace std;
int help(int a){
    int ans=0;
    while (a){
        int y=a%10;
        a=a/10;
        ans+=(y*y);
    }
    if (ans<10)return ans;
    else return help (ans);

}
int main(){
    int a;
    cin>>a;
    if (help(a)==1 or help (a) ==7)cout<<"True";
    else cout<<"False";
}