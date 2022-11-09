#include<iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int a,b;
        cin>>a>>b;
        if (a<c or b<c)cout<<"UPLOAD ANOTHER"<<endl;
        else if (a==b)cout<<"ACCEPTED"<<endl;
        else cout<<"CROP IT"<<endl;
    }
}