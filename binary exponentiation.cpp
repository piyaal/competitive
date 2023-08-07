
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;
ll binexprecur(int a,int b)
{
    if(b==0)
        return 1;
    ll res=binexprecur(a,b/2);
    if(b&1)
    {
        //return a*res*res;
        //if we want to calculate modular of power
        return a*((res*res)%M)%M;
    }
    else
    {
        //return res*res;
        //if we want to calculate modular of power
        return (res*res)%M;
    }
}
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<binexprecur(a,b);


        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
