
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,k,a;
	cin>>t;
	while(t--){
		map<int,int>m;
		int cc=-1;
		cin>>k;
		while(k--){
			cin>>a;
			m[a]++;
			if(m[a]==3)cc=a;
		}
		cout<<cc<<endl;
	}
}
