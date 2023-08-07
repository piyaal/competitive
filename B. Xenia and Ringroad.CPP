#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 int n,m,x,c=1;
    cin >> n >> m;
    ll ans=0;
    while (m--){
        cin>>x;
        if(x<c) ans += x+n-c;
        else ans += x-c;
        c=x;
    }
    cout << ans;
}
