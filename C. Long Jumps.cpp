#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;

int main()
{

    ll n,t,i,a,b,c=0,arr[200000];
	cin >> t;
	while (t--){
		cin >> n;
		for (i = 1; i<=n; ++i)
			cin >> arr[i];
		for (i = n; i >= 1; --i)
			if (i + arr[i] <= n)
				arr[i] += arr[i + arr[i]];
		sort(arr, arr+n+1);
		cout << arr[n] << endl;
	}
}
