#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    if (y%400==0)cout<<"True";
    else {
        if (y%100!=0 and y%4==0)cout<<"True";
        else cout<<"False";
    }
}