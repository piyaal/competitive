#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
#define all(x) (x).begin(), (x).end()
int main()
{
    ll i,n,t,a,b,c;
    cin >> t;
    while(t--)
    {
        cin>>a>>b;
        c=max(2*min(a,b), max(a,b));
        cout<<c*c<<endl;
 }    }
