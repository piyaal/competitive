
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//int N=1e6+10;
const int N=1e3+10;
int arr[N][N];
ll pf[N][N];
int main()
{

    ll n,t,i,a,b,c,d,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
     cin>>a>>b>>c>>d;
     cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];


    }
    //if cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}
