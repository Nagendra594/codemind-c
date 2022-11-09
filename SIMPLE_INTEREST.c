#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int s[3];
    for(int i=0 ; i<3 ; i++){
        cin>>s[i];
    }
    cout<<(s[0])*(s[1])*(s[2])/100;
}