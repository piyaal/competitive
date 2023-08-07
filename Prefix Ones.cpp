
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
        string s,ss;
        cin>>s;
        ll arr[2*n],cnt=0;
        vector<ll>vec;
        for(i=0; i<n; i++)
        {
            a=i;
            ll  cc=0;
            while(a<n && s[a]=='1')
            {
                a++;
                cc++;
            }
            arr[i]=cc;
            vec.push_back(arr[i]);
            cnt=max(cnt,cc);
            i=a;
        }
        b=vec[0];
        c=0;
        for(i=1; i<vec.size(); i++)
        {
            c=max(c,vec[i]);
        }
        cout<<b+c<<endl;
    }

    //sort(arr+1,arr+n+1);
    //if cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}
