#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,k, n) for (int i =k; i <=n; i++)
int main()
{
    ll a,n,h,c=0;
    cin>>n>>h;
    f(i,1,n)
    {
        cin>>a;
        if(a>h) c=c+2;
        else c++;
    }
    cout<<c<<endl;
}
