

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    /////////////////bruteforce
    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ct=0,sum=0;
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<i<<" "<<n/i<<endl;
                ct++;
                sum+=i;
                if(n/i!=i)
                {
                    sum+=n/i;
                    ct+=1;
                }
            }

        }
        cout<<"divisors"<<ct<<" "<<"sum of divisors"<<sum<<endl;
    }
}
