
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
        string s,ss,sst;
        cin>>n>>m;
        cin>>s>>ss;
        sst=ss+s;
        ll arr[n];
        set<int> st;
        map<string,int>mp;
        for(i=0; i<sst.size(); i++)
        {
            st.insert(sst[i]);
            mp["sst[i]"]++;
        }
        c=n+m;
        ll cc=0;
        if(c%2==0) a=0;
        else a=1;
        map<int, string>::iterator itr;
    for(auto it:mp)
    {
        if(it.second%2==0)<<endl;
    }
        /*
            if(it%2==0) continue;
            else
            {
                if(a==0 && it%2!=0)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else if(a==1 && it%2==1)
                {
                    cc++;
                    if(cc>1)
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        if(cc==0 && a==0) cout<<"YES"<<endl;
                if(cc==1 && a==1) cout<<"YES"<<endl; */

    }
}
