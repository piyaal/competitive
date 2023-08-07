
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
        string s;
        cin>>n>>m>>k;
        if(m>k) cout<<ceil(n/(m*1.0)) <<endl;
        else
        {
            n-=k;
            cout<<ceil(n/(m*1.0))+1<<endl;
        }

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
