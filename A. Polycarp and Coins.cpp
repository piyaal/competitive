#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const long long int N=1e9+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n/3+(n%3==1)<<" "<<n/3+(n%3==2)<<endl;
    }
}
