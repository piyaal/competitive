#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0,x1,x2,x3,y1,y2,y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        map<ll,ll>mp;
        mp[x1]++;
        mp[x2]++;
        mp[x3]++;
        mp[y1]++;
        mp[y2]++;
        mp[y3]++;
        set<ll>st,st1;
        st.insert(x1);
        st.insert(x2);
        st.insert(x3);
        st1.insert(y1);
        st1.insert(y2);
        st1.insert(y3);
        if(st.size()<3 && st1.size()<3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        /*if(x2<=x1&& x1<=x3 && y2<=y1 && y1<=y3) cout<<"YES"<<endl;
        else if(x1<=x2&& x2<=x3 && y1<=y2&& y2<=y3) cout<<"YES"<<endl;
        else if(x1<=x3&& x3<=x2 && y1<=y3&& y3<=y2) cout<<"YES"<<endl;
        else if(x3<=x1&& x1<=x2 && y3<=y1&& y1<=y2) cout<<"YES"<<endl;
        else if(x2<=x3&& x3<=x1 && y2<=y3&& y3<=y1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /* int arr[n+1];
        for(i=1;i<=n;i++)
        {
         cin>>arr[i];
        }  //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;*/
    }
}

