
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,m;
    cin>>n>>l;
    vector<int>v(n);
    for(int i=0;i<n;++i)cin>>v[i];
    sort(v.begin(),v.end());
    m=max(v[0],l-v[n-1])*2;
    for(int i=1;i<n;++i)m=max(m,v[i]-v[i-1]);
    printf("%lf",m/2.0);
}
