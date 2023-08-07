
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long
const int mod = 1e9 + 7;
const int maxn = 2e5 + 4;
const ll INF = 1e9;

int n, res;
vector<int> adj[maxn], ans[maxn];
map<pair<int,int>,int> mp;

void dfs(int u, int p, int pre)
{
    int day = 0;
    for (auto v : adj[u])
    {
        if (v == p) continue;
        day++; if (day == pre) day++;
        ans[day].push_back(mp[{u, v}]);
        dfs(v, u, day);
    }
    res = max(res, day);
}

int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[{u, v}] = mp[{v, u}] = i;
    }
    dfs(1, 0, -1);
    cout << res <<endl;
    for (int i = 1; i <= res; i++)
    {
        cout << ans[i].size() << ' ';
        for (auto j : ans[i]) cout << j << ' ';
        cout << '\n';
    }
}
