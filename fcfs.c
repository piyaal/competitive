#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int atime[n+1],btime[n+1],ctime[n+1],wtime[n+1],awtime[n+1];
    for(i=0;i<n;i++)
    {
        cin>>atime[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>btime[i];
    }
    pair<int,int> pair[n+1];
    for(i=;i<=n;i++)
    {
        pair.first=atime[i];
        pair.second=i;
    }
    sort(pair+1,pair+n+1)
    int last=0;
    for(i=1;i<=n;i++)
    {
        cout<<pair[i].first<<pair[i].seccond;
    }
}
