
#include <bits/stdc++.h>

using namespace std;
long long n,k,t,m;
const int N=200005;
long long a[N];
long long x,y;
pair<long long,long long> p[N];

int main(){
   cin>>t;

   while(t--){
   cin>>n>>m;

   for(int i=1;i<=n;i++)a[i]=n+1;
   for(int i=1;i<=m;i++){
   	cin>>x>>y;
   	if(x>y)swap(x,y);
   	a[x]=min(a[x],y);
   }
   long long ans=0;
   for(int i=n;i>=1;i--){
   	ans+=a[i]-i;
   	a[i-1]=min(a[i-1],a[i]);
   }
   cout<<ans<<endl;
   }

	return 0;
}
