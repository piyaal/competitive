#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin>>n;
	vector<int> v[3];
	for (int i=0; i<n; i++) {
		cin>>x;
		v[x-1].push_back(i+1);
	}
	int cnt=min({v[0].size(), v[1].size(), v[2].size()});
	cout<<cnt<<'\n';
	for (int i=0; i<cnt; i++) {
		cout<<v[0][i]<<' '<<v[1][i]<<' '<<v[2][i]<<'\n';
	}
}
