
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int a,b,t,j,i,k,n;
    cin>>t;
    while(t--) { cin>>n;
        ll len = 3*n;
         i=2;
        j=len;
        if(n<=2) {
            if(n == 1) {
                cout<<"1"<<endl;
                cout<<"1 2"<<endl;
            } else {
                cout<<"1"<<endl;
                cout<<"2 6"<<endl;
            }
        } else {
            long long ans = 0;
            vector<pair<long long, long long>> v;
            while(i < j) {
                v.push_back({i, j});
                i+=3;
                j-=3;
                ans++;
            }
            cout<<ans<<endl;
            for(auto i : v) {
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
    }
	return 0;
}
