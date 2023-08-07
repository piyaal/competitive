

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int a,t,j,i,k,n;
    cin>>t;
    while(t--)
    {
        cin >>n;
	ll x;
	ll a[n];
	for(i=0;i<n;i++) cin >> a[i];
		ll mn = *min_element(a+1, a+n);
		if(a[0]<= mn)	cout << "Bob";
		else cout << "Alice";


	cout << endl;
}

    }
