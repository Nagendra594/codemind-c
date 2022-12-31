#include <bits/stdc++.h>
using namespace std;
int hcf(int x,int y){
	int X=x,Y=y;
	while (true){
		if (x==0 || y==0){
			break;
		}
		if (x>y)x%=y;
		else y%=x;
	}
	if (x==0)return X*Y/y;
	return X*Y/x;
}
int hcfarray(vector<int> v){
	if (v.size()==2){
		return hcf(v[0],v[1]);
	}
	int H=hcf(v[0],v[1]);
	for (int i=2;i<v.size();i++){
		H=hcf(H,v[i]);

	}
	return H;

}
int main(){
	int l,r;
	cin>>l;
	vector<int>arr;
	for (int i=1;i<=l;i++){
		cin>>r;
		arr.push_back(r);

	}
	cout<<hcfarray(arr);
}