
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ll t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      int x=s.size();
      if(s[0]==s[x-1])
      cout<<x-2<<endl;
      else cout<<2<<endl;
  }
  return 0;
}
