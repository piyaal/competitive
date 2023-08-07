
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {  ll cc=0;
        string s;
        cin>>n>>s;
        ll arr[n];
        vector<ll>vec1(n,0),vec2(n,0);
        set<int> ss;
        map<char,ll> map1,map2;
        map1[s[0]]++;
        vec1[0]=1;
        for (i=1;i<n; i++)
        {
            ss.insert(s[i]);
            if(map1.find(s[i])==map1.end())
                vec1[i]=1+vec1[i-1];
            else
                vec1[i]=vec1[i-1];
            map1[s[i]]++;
        }
        map2[s[n-1]]++;
        vec2[n-1]=1;
        for (i=n-2;i>=0; i--)
        {
            if(map2.find(s[i])==map2.end())
                vec2[i]=1+vec2[i+1];
            else
                vec2[i]=vec1[i+1];
            map2[s[i]]++;
        }
         for (i=0;i<n; i++)
        {
           cc=max(cc,vec1[i]+vec2[i]);
        }
         if(cc>n) cc=n;
        if(ss.size()*2==n)
            cout<<ss.size()+1<<endl;
         else
            cout<<cc<<endl;
            /*
        else if (ss.size()+1>(n/2))
            cout<<n<<endl;
        else if (ss.size()+1<=(n/2))
            cout<<ss.size()+1<<endl;

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl; */
    }
}
