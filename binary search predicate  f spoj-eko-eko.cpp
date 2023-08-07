
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+10;
int n; ll m;
int trees [ N];
bool iswood(int h)
{
    ll wood=0,i;
    for(i=0;i<n; i++)
    {
        if(trees[i]>=h)
        {
            wood+=(trees[i]-h);
        }
    }
    if(wood>=m) return true;
    return false;
}
int main()
{

   ll t,i,a,b,c;
    t=1;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>trees[i];
        }
        ll lo=0,hi=1e9+10;
        ll mid;
        while(hi-lo>1)
        {
            mid=(hi+lo)/2;
            if(iswood(mid)) lo=mid;
            else hi=mid-1;
        }
        if(iswood(hi)) cout<<hi<<endl;
        else cout<<lo<<endl;

    }
}
