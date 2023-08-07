#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
     string s,sn,ss,sx; char cx;
        cin>>n;
        s=to_string(n);
        a= s.size();
        cx=s[0];
         b=(cx-'0');
        cout<<b+(9*a)-9<<endl;


        /*if(n>11) c+=10;
         if(n>99==0) c+=19+(n/100);
        if(n>999==0) c+=n/100000;
        if(n>10000==0) c+=n/10000;
        if(n>1000==0) c+=n/1000;
        if(n>100==0) c+=n/100;
        if(n>100==0) c+=n/100;
         cout<<c<<endl;
        /*int arr[n+1];
        for(i=1;i<=n;i++)
        {
        cin>>arr[i];
        }  //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;*/
    }
}

