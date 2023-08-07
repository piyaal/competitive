
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e9+10;
int main()
{

    ll n,j,m,k,t,i,a,b,c,cc;
    cin>>t; ll md=100000007;
    while(t--)
    {
        cin>>n;
        c=2022;
        for(i=1; i<n; i++)
        {
            c=(c+2022*((i+1)*(2*i+1)))%md;
        } cout<<c<<endl;}}
