
#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main(){
	int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    vector< pair<ll, ll>>v(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[i].first =  (x - x1)*(x - x1) + (y-y1)*(y - y1);
        v[i].second = (x-x2)*(x - x2) + (y-y2)*(y - y2);
    }
   sort(v.begin(),v.end());
    ll ma[n];
    memset(ma,0,sizeof(ma));
    ll maxi=0;
    for(ll i=n-1;i>=0;i--){
        maxi=max(maxi,v[i].second);
        ma[i]=maxi;
    }
    ll answer=min(v[n-1].first,maxi);
    maxi=0;
    for(ll i=0;i<n-1;i++){
        maxi=max(maxi,v[i].first);
        answer=min(answer,ma[i+1]+maxi);
    }
    cout<<answer;
    return 0;
}
