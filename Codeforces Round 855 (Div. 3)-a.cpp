#include <bits/stdc++.h>
using namespace std;

const int N = 5005;

int n, a[N], b[N], top, ans;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 0) b[++top] = i;
        }
        int p = 0, q = 1;
        ans = 0;
        while (p < top) {
            int sum = 0, mx = 0, idx = -1;
            for (int i = q; i < b[p + 1]; i++) {
                if (a[i] > mx) {
                    mx = a[i];
                    idx = i;
                }
            }
            if (idx == -1) {
                p++;
                q = b[p] + 1;
            } else {
                sum += mx;
                a[idx] = 0;
                while (top && b[top] > idx) {
                    sum += a[b[top]];
                    a[b[top--]] = 0;
                }
                ans += sum;
                q = idx + 1;
            }
        }
        cout << ans << endl;
        top = 0;
    }
    return 0;
}
