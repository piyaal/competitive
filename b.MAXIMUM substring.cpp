#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
		ll n;
	cin>>n;
	string s;
	cin>>s;
	ll o=0, z=0;
	for(int i=0; i<n; i++){
		if(s[i]=='1'){
			o++;
		}
		else{
			z++;
		}
	}
	ll ans=(o*z);
	ll cur=0;
	for(int i=0; i<n; i++){
		if(s[i]=='0'){
			ans=max(ans, cur*cur);
			cur=0;
		}
		else{
			cur++;
		}
	}
	ans=max(ans, cur*cur);
	cur=0;
	for(int i=0; i<n; i++){
		if(s[i]=='1'){
			ans=max(ans, cur*cur);
			cur=0;
		}
		else{
			cur++;
		}
	}
	ans=max(ans, cur*cur);
	cout<<ans<<endl;
}

}
