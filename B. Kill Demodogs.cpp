
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e9+10;
int main()
{

    ll n,j,m,k,t,i,a,b,c,cc;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+1][n+1];
        c=0;
        cc=0;
        for(i=1; i<=n; i++)
        {
            cc+=((i%N)*(i%N))%N;
        }
        for(i=1; i<=n; i++)
        {
            if(i==n) break;
            else cc+=((i%N)*((i+1)%N))%N;
        }
        /*i=1;
        j=1;
        while(i<=n && j<=n)
        {
            c+=((i%N)*(j%N))%N;
            if((j*(i+1))>(i*(j+1)))
            {
                i++%N;
            }
            else if((i*(j+1))>(j*(i+1)))
            {
                j++%N;
            }
            else i++%N;
        }/*
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                arr[i][j]=(i*j)%N;
                if(i==j)
                {
                    c+=((i%N)*(j%N))%N;//c+=arr[i][j]%N; ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
                }
                else
                {
                    if(j-i==1 ) c+=((i%N)*(j%N))%N; //c+=arr[i][j];
                    else if(i==j && j==n && i==n)
                    {
                        c+=((i%N)*(j%N))%N;//c+=arr[i][j];
                        c+=((i-1%N)*(j%N))%N;//c+=arr[i-1][j];
                    }
                }
            }

        } */cout<<((cc%N)*(2022%N))%N<<endl;//cout<<(c*2022)%((10*10*10*10*10*10*10*10*10)+7)<<endl;
    }
}
