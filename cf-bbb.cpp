#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
	cin >> t;

	while(t--){
		int n,m;
		cin >> n >> m;
		map<int,int>a;
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			a[max(x,y)]=max(a[max(x,y)],min(x,y));
		}
		int ans=0,curr=0;
		for(int i=1;i<=n;i++){
			curr=max(curr,a[i]);
			ans+=(i-curr);

		}
		cout<<ans<<endl;
	}
}
