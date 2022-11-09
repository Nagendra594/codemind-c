#include<bits/stdc++.h>
using namespace std;
int main(){
    int b;
    cin>>b;
    vector<int>ind;
    while (b){
        int y=b%10;
        b=b/10;
        ind.insert(ind.begin(),y);
    }
    int c=count(ind.begin(),ind.end(),6);
    if (c>0){
        for (int i=0 ; i<ind.size(); i++){
            if (ind[i]==6){
                vector<int>::iterator it;
                it = ind.begin()+i;
                ind.erase(it);
                ind.insert(ind.begin()+i,9);
                break;
            }
        }
        for (auto it : ind){
            cout<<it;
        }
    }
    else if (c==0){
        for (auto it : ind){
            cout<<it;
        }
    }
}