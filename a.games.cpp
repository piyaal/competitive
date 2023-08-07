
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,i,j;
    int f[35],d[35];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>f[i]>>d[i];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(f[i]==d[j])
                a++;
    cout<<a;
}
