#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin >> a >> b;
        int x = (a + b) / 4;
        int y = min (a, b);
        cout << min(x, y) << endl; } }
