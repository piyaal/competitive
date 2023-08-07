#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==1)a.push_back(i);
	}
	n=a.size();
	if(n==0)cout<<0;
	else{
	    long long ans=1;
	for(int i=0;i<n-1;i++){ans*=a[i+1]-a[i]; }
	cout<<ans;
	}
}
