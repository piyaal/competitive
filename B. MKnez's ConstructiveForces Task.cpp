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
        if(n==3) cout<<"NO"<<endl;
        else if(n%2==0)
        {
            cout<<"YES"<<endl;
            for (i=0; i<n; i++)
            {
                if(i&1)
                {
                    cout<<-1<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for (i=0; i<n; i++)
            {
                if (i%2==0)
                {
                    cout<<(n-2)/2<<" ";
                }
                else
                {
                    cout<<-((n-2)/2+1)<<" ";
                }
            }
            cout<<endl;
        }
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
