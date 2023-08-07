#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int atime[n+1],btime[n+1],ctime[n+1],wtime[n+1],awtime[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>atime[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>btime[i];
    }
   pair<int, int> Pair[n + 1];
  for (int i = 1; i <= n; i++) {
    Pair[i].first = atime[i];
    Pair[i].second = i;
  }
    sort(Pair + 1,Pair+n+1);
    int last=0;
    for(i=1;i<=n;i++)


    {
        cout<<Pair[i].first<<" "<<Pair[i].second<<endl;
    }
}

