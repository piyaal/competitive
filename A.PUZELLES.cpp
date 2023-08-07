
#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,ld,i;
cin>>n>>m;
int f[m];
for(int i=0;i<m;i++)
{cin>>f[i];}
sort(f,f+m);
ld= f[n-1]-f[0];
for(i=1;i<=m-n;i++)
{
    if(f[n-1+i]-f[i]<ld)
    ld=f[n-1+i]-f[i];
}
    cout<<ld;
}
