#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    ll n,m,t,i,j,xx,yy,a,b,cc,c,d;
    cin>>t;
    while(t--)
    {
        cc=0;
        cin>>n>>m;
        c=0,d=0;
        int arr[n+1][n+1];
        for (i=0; i<m; i++)
        {
            cin>>a>>b;
            arr[a][b]=1;
            arr[b][a]=1;
        }
        for(i=1; i<n+1; i++)
        {    int ar1[n+1];
            c=0;
            d=0;
            for(j=i;j<n+1; j++)
            {
                ar1[c]=j;
                c++;
                for(xx=0; xx<c; xx++)
                {
                    for(yy=0; yy<c; yy++)
                    {
                        if(arr[ar1[xx]][ar1[yy]]==1)
                        {
                            d=1;
                            break;
                        }
                    }
                    if(d==1)
                        break;
                }
                if(d==1)
                {
                    break;
                }
                else
                {
                    cc+=1;
                }
            }
        }
        cout<<cc<<endl;
    }
}
