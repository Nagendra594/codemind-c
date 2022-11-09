#include<iostream>
using namespace std;
int main(){
    int f;
    cin>>f;
    if (f<2)cout<<0;
    else
        cout<<f*(f-3)/2;
}