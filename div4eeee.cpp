
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
        ll cc=0;
        c=0;
        ll d=0;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            cc+= abs(arr[i]);
            if(arr[i]<0) c++;
        }
        for(i=0; i<n; i++)
        {
           if(arr[i]<0) arr[i]=abs(arr[i]);
            }
            if(c%2==0) cout<<cc<<endl;
            else
            {
                a=*min_element(arr,arr+n);
                cout<<cc-2*a<<endl;
            }
           // if(arr[i]<=0 && arr[i+1]<=0)
           // {
               // cc+=(abs(arr[i])*2+abs(arr[i+1])*2);
               // d++;
               // i=i+1;
            //}



        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
 }   }
