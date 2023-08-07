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
        cin>>n;
        ll lo=1,hi=n,mid;
        c=0;
        while(hi-lo>1)
        {
            mid=(hi+lo)/2;
            if(mid*mid>n)
            {

                hi=mid-1;
            } else { c++;
                lo=mid+1;}
        }
        if(c==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; }}
