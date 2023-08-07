#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
#define infinity 899999999999999999
#define MOD_DEFINE const int MOD = 1e9 + 7;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define space " "
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb(n) push_back👎
#define ff first
#define ss second
#define mii map<int, int>
#define umii unordered_map<int, int>
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define cout std::cout
#define cin std::cin
#define l(var, initial, final) for (int var = initial; var < final; var++)
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>

int32_t main()
{ ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin >> n;
        ll arr[n+1];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll sum = 0;c=0;
        for(i=0; i<n; i++)
        {
            c+=arr[i];
        }
        int maxi = 0;
        int suml = 0;ll mx=0; ll mn=0;
        for (int i = 0; i < n - 1; i++)
        {
            mn+= arr[i];
            c-= arr[i];
            mx= max(mx, __gcd(mn,c));
        }
        cout << mx<<endl;
}
}
