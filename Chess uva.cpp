#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--) {
        char c;
        int m;
        int n;
        cin >> c >> m >> n;
        int mini = min(m, n);

        if (c == 'Q' || c == 'r')
            cout << mini;
        else if (c == 'K')
            cout << ((n + 1) / 2) * ((m + 1) / 2);
        else
            cout << (m * n + 1) / 2;
        cout << "\n";
    }
}

