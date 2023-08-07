#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
bool check_peaceful(int a, int b, int c, int k) {
    int mx = max(max(a, b), c);
    int sum = a + b + c;
    if (sum % 2 == 1) {
        return false;
    }
    return mx <= (sum / 2 + k - 1) / k * k;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <=t; i++) {
        int a, b, c, k;
        cin >>a>>b>>c>>k;
        cout << "Case " << i << ": ";
        if (check_peaceful(a, b, c, k)) {
            cout << "Fight" << endl;
        } else {
            cout << "Peaceful" << endl;
        }
    }
    return 0;
}
