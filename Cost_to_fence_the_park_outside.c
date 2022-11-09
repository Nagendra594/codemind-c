#include<iostream>
using namespace std;
int main(){
    int a[4];
    for (int i=0 ; i<4 ; i++){
        cin>>a[i];
    }
    int t=a[0]*a[1];
    int l=(a[0]+2*a[2])*(a[1]+2*a[2]);
    l=l-t;
    cout<<l*a[3];
}