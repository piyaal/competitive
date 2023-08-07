#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n+1),b(n+1);
    vector<int> c(2*n+1),d(2*n+1);
    ll cc=1;
    for (int i =1; i <=n; i++)
    {
        cin>>a[i];
        if(a[i-1]==a[i])cc++;
        else cc=1;
        if(c[a[i]]<cc) c[a[i]]=cc;
             } cc=1;
         for (int i = 0; i < n; i++)
    {
        cin >> b[i];
         if(b[i-1]==b[i])cc++;
        else cc=1;
        if(d[b[i]]<cc) d[b[i]]=cc;
             }
    map<int, int> mapA;
    map<int, int> mapB;
    int count = 1;

    for (int i = 1; i <=n; i++)
    {
        if (count<c[a[i]]+d[a[i]])
        {
            count=c[a[i]]+d[a[i]];
        }
    }
    for (int i = 1; i <=n; i++)
    {
        if (count<c[b[i]]+d[b[i]])
        {
            count=c[b[i]]+d[b[i]];
        }
    } cout<<count<<endl; }
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
