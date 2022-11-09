#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int d;
        cin>>d;
        int c=1;
        for (int j=1 ; j<d+1 ; j++){
            c*=j;
        }
    cout<<c<<endl;
    }
}