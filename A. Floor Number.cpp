
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        if(n<=2) cout<<"1"<<endl;
        else
        {
            n-=2;
            cout<<(n-1)/b+2<<endl;
            //if cout<<"YES"<<endl;
            //else cout<<"NO"<<endl;
        }
    }
}
