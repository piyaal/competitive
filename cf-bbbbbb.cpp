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

        cin>>n>>a>>b;
        c=0;
        vector<ll>v(n-1);
        cout<<a-b<<" ";
        c=(b%(n-1));
        ll d=(b/(n-1));
        for(i=1; i<n; i++)
        {
            if(c>0)
            {
                cout<<d+1<<" ";
                c--;
            }
            else cout<<d<<" ";
        } cout<<endl;
        /*while(b!=0)
        {
            if(v[c]<(a-b))
            {
                v[c]++;
                b--;
            }
            else
                c++;
        }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;*/
    }
}

