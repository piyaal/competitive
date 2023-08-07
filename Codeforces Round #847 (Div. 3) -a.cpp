
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c,d;
    cin>>t;

    while(t--)
    {
        string s,ss; ss="314159265358979323846264338327";
        ll  cc=0,sz;
        cin>>s;  sz=s.size();
        for(i=0; i<sz; i++)
        {
            if(s[i]==ss[i])
                cc++;
            else
             break;
        }
        cout<<cc<<endl;
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
