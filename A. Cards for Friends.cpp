#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,w,h,cc; cin>>t;
    while(t--)
{
cin>>w>>h>>n;cc=1;
while(w%2==0)
{
cc=cc*2;
w=w/2;
}
while(h%2==0)
{
cc=cc*2;
h=h/2;
}
if(cc>=n) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
