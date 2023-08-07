#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,ans=0;
    cin>>a>>b>>c;
  ans = max(ans,(a+b)*c);
  ans = max(ans,a+b+c);
  ans = max(ans,a*(b+c));
  ans = max(ans,a*b*c);
  cout<<ans<<endl; }
