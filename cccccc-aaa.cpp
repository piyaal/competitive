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
        cin>>n;
        ll arr[n];
        ll cc=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            cc+=arr[i];
        }
        m=0;
        for(i=0; i<n-1; i++)
        {
            if(arr[i]==-1 && arr[i+1]==-1)
            {
                m=1;
                break;
            }
        }
        if(m==1)
        {
            cout<<cc+4<<endl;
        }
        else
        {
            if(cc==n)cout<<cc-4<<endl;
            else
                cout<<cc<<endl;
        }
        // if(n==2 && arr[0]==1 && arr[1]==1) cout<<-2<<endl;
        //else if(n==2 && arr[0]==-1 && arr[1]==-1) cout<<2<<endl;
        //  else
        //{
        //  c=0;
        //for(i=0; i<n; i++)
        //  c+=arr[i];
        //cout<<c<<endl;
        //}
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
