#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if (a%3==0 or a%5==0 or a%7==0){
    if (a%3==0)cout<<"Pling";
    if (a%5==0)cout<<"Plang";
    if (a%7==0)cout<<"Plong";
    }
    else cout<<a;
}