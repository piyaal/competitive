
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll> v(n,0LL);
    for(ll i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            v[i]=v[i-1]+1;
        }
        else
        {
            v[i]=v[i-1];
        }
    }
    cin>>n;
    while(n--)
    {
        ll l,r;
        cin>>l>>r;
        cout << v[--r]-v[--l] << endl;
    }
}
