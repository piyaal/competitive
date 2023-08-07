#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,p,q,i,a,c; cin >> n;
	cin >> p;
	set<int> ss;
	for (i = 0; i < p; i++) {
		cin >> a;
		ss.insert(a);
	}
	 cin >> q;
	for (i = 0; i < q; i++) {
		cin >> a;
		ss.insert(a);
	}
	if (ss.size() == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";
}
