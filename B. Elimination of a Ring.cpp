
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v[n];
        set<int> sst;
        for(int i=1;i<=n;i++){
            cin>>a;
            sst.insert(a);
        }
        if(sst.size()>2){
            cout<<n<<endl;
        }
        else if(sst.size()==1) cout<<1<<endl;
        else cout<<(2+(n-2)/2)<<endl;

    }
}
