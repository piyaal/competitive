
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x,y; cin>>x>>y;
if(x%y==0) cout<<0<<endl; else{
cout<<y-(x%y)<<endl;
		}
    } }
