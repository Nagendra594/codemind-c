#include<bits/stdc++.h>
using namespace std;
bool divide(vector <int> fact , int s){
    for (auto it : fact){
        if (it%s!=0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    vector<int>vec;
    for (int i=0 ; i<t ; i++){
        int r;
        cin>>r;
        vec.push_back(r);
    }
    int min=*min_element(vec.begin(),vec.end());
    vector<int>fact;
    for (int i=1 ; i<min+1 ; i++){
        if (min%i==0)fact.push_back(i);
    }
    for (int i=fact.size()-1 ; i>-1 ; i--){
        if (divide(vec,fact[i])){
            cout<<fact[i];
            break;
        }
    }  
}