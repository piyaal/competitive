

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
vector<bool>isprime(N,1);
int main()
{
    isprime[0]=isprime[1]=false;
    ll n,m,k,t,i,a,b,c;
        for(i=2; i<N; i++)
        {
            if(isprime[i]==true)
            {
                for(int j=2*i; j<N; j+=i)
                {
                    isprime[j]=false;
                }
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            int num;
            cin>>num;
            if(isprime[num])
            {
                cout<<"prime";
            }
            else cout<<"NOt prime"<<endl;
            }

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
