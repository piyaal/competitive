#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
int main() {
    long long  int t,f,n,i,j,sum; cin >> t;
    f = 0;
    while(t--) {
        f++;
        set<long long int >ss;
        cin >> n;
        long long int  a[n + 2];
        for(i = 0; i < n; i++) cin >> a[i];
        for(i = n - 1; i >= 0; i--) {
        if(ss.count(a[i]) == 0 && ss.count((-a[i])) == 0)
            ss.insert(a[i]);
        }
        vector<long long int> v(ss.begin(), ss.end());
        sum = 0;
        for( i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        cout << "Case " << f << ": " << sum << '\n';
    }
    return 0;
}
