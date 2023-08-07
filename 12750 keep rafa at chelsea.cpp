#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,k,l,n,m,t,tst;
    char x[500];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
            cin>>x[j];
        for(j=0;j<n;j++)
        {
            if(x[j]!='W' && x[j+1]!='W' && x[j+2]!='W')
            {
                b=j+3;
                break;
            }
      }
        if(b>n)
        {
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        }
        else
            printf("Case %d: %d\n",i,b);
    }
    return 0;
}
