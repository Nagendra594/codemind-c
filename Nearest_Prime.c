#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n==1)return false;
    int y=sqrt(n);
    for (int i=2 ; i<y+1 ; i++){
        if (n%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int y;
        cin>>y;
        vector<int>vec;
        int f=y;
        while (1){
            if (prime(f)){vec.push_back(f);break;}
            else f+=1;
        }
        int b=y;
        while (1){
            if (prime(b)){vec.push_back(b);break;}
            else b-=1;
        }
        vec[0]=vec[0]-y;vec[1]=y-vec[1];
        int u=*min_element(vec.begin(),vec.end());
        if(vec[0]==vec[1])cout<<y-vec[0]<<endl;
        else if (u==vec[0])cout<<y+vec[0]<<endl;
        else cout<<y-vec[1]<<endl;
    }
}