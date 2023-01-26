#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=1;j<=(n-2);j++){
            cout<<j;
        }
        for (int k=(n-3);k>0;k--){
            cout<<k;
        }
    cout<<endl;}
}