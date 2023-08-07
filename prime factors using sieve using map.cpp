




#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
vector<bool>isprime(N,1);
vector<int>lp(N,0),hp(N,0);
int main()
{
    isprime[0]=isprime[1]=false;
    ll n,m,k,t,i,a,b,c;
    for(i=2; i<N; i++)
    {
        if(isprime[i]==true)
        {
            lp[i]=hp[i]=i;
            for(int j=2*i; j<N; j+=i)
            {
                isprime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    // for(int i=1;i<100;i++) // 1 to 100 lowest prime of a number;
    //cout<<lp[i]<<" "<<hp[i]<<endl;
      int q; cin>>q; while(q--){
        int num;
        cin>>num;
        //vector<int>prime_factors;
        map<int,int>prime_factors;
        while(num>1)
        {
            int prime_factor=hp[num];
            while(num%prime_factor==0)
            {
                num/=prime_factor;
                //prime_factors.push_back(prime_factor);
              prime_factors[prime_factor]++;
            }

        }
        for(auto factor:prime_factors)
        {
            cout<<factor.first<<" "<<factor.second<<endl;
        }
    } }
//sort(arr+1,arr+n+1);
//if cout<<"YES"<<endl;
//else cout<<"NO"<<endl;
