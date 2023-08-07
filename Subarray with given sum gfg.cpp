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
        cin>>n;c=0;
        ll arr[n];
        set<int> ss;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            ss.insert(arr[i]); if(arr[i]==1) c++;
        }
        if(c%2==0) cout<<c/2+n-c<<endl;
        else cout<<c/2+n-c+1<<endl;


    }
}
