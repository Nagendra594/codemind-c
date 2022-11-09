#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    int i=2;
    vector<int>vec={0,1};
    while (i<y){
        vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
        i+=1;
    }
    for (auto it : vec){
        cout<<it<<" ";
    }
}