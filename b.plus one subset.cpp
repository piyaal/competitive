#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
#define all(x) (x).begin(), (x).end()
int main()
{
    ll i,n,t,a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n);
        for(i=0; i<n; i++)
            cin >>v[i];
        ll x = *min_element(all(v));
        ll y = *max_element(all(v));
        cout << y - x << endl;
    }
}
