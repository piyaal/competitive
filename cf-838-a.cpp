#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,cc,sum;
    cin>>t;
    while(t--)
    {
        c=0;
        cc=0;
        vector<ll>  od,ev;
        cin>>n;
        int arr[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) ev.push_back(arr[i]);
            else od.push_back(arr[i]);
        }
        sort(od.begin(),od.end());
        sort(ev.begin(),ev.end());
         c=0,cc=0;
        if(od.size()%2==1)
        {
            while(od[0]%2!=0)
            {
                od[0]=od[0]/2;
                c++;
            }
            if(ev.size()!=0)
            {
                while(ev[0]%2!=1)
                {
                    ev[0]=ev[0]/2;
                    cc++;
                }


                cout<<min(c,cc)<<endl;
            }

        else cout<<c<<endl;
    }
    else cout<<0<<endl;
}
}

