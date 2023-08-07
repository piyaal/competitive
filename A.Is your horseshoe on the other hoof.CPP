#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for (int i=1; i <=n; i++)
#define ll long long int
int main()
{
    ll a,b,c,d,i;
    set<int>s;
    for(i=1;i<=4;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<4-s.size();
}
