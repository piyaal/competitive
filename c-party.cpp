
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t,a,b,c,d=0;
	cin>>n; long long int ar[n+1];
	for(int i=1;i<=n;i++) cin>>ar[i];
	for(int i=1;i<=n;i++){
		c=0;
		for(int j=i;j!=-1;) {c++; j=ar[j];}
		d=max(d,c);
	}
	cout<<d;
}
