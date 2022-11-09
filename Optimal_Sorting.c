#include<bits/stdc++.h>
using namespace std;
int ans(vector<int>vec){
    vector<int>k;
    for (auto it : vec){
        k.push_back(it);
    }
    sort(k.begin(),k.end());
    if (k==vec)return 0;
    else{
        return *max_element(vec.begin(),vec.end())-*min_element(vec.begin(),vec.end());
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int l;
        cin>>l;
        vector<int>vec;//1 3 6 7 
        for (int i=0 ; i<l ; i++){
            int y;
            cin>>y;
            vec.push_back(y);
        }
        cout<<ans(vec)<<endl;
    }
}