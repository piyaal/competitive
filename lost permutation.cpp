#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n+1];
		map<int,int> m;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			m[a[i]]=1;
		}
		sort(a+1, a+n+1);
		for(int i=1; i<=a[n]; i++){
			if(m[i]==0){
				s-=i;
			}
		}
		int k=a[n]+1;
		while(s>0){
			s-=k;
			k++;
		}
		if(s<0){
			cout<<"NO";
		}else{
			cout<<"Yes";
		}
		cout<<endl;

	}
}
