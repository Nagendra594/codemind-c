#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=0;
    for (int i=a ; i<b+1 ; i++){
        if (i%c==0)d+=1;
    }
    cout<<d;
}