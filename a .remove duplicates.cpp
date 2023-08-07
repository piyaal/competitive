#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[100]; cin>>n; map<int,int> m,x; set<int> s;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i]; x[a[i]]=i; m[i]=a[i];
  }
  for (int i = 0; i < n; i++) s.insert(x[a[i]]);
  cout<<s.size()<<endl;
  for (auto i : s)
  {
    cout<<m[i]<<" ";
  }
}
