#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
bool vis[N];
vector<int>v[N];
vector<int> vstd(N,0);
int cat[100005];
int n,m;
int cc;
void dfs (int vrtx, int c) {
	if(cat[vrtx]){
		c++;
	}else{
		c=0;
	}
	vstd[vrtx]=1;
	if (c<=m) {
		if(v[vrtx].size()==1&&vrtx!=1){
			cc++;
		}
		for(int i:v[vrtx]) {
			if(!vstd[i]){
				dfs(i,c);
			}
		}
	}
}

int main()
{
    //ll m,n;
    cin>>n>>m; //int cat[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>cat[i];
    }
    int x,y;
	for(int i=1;i<n;i++) {
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0);  cout<<cc<<endl;}

