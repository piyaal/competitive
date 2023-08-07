
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int max_num = max(max(a, b), c);
        int min_num = min(min(a, b), c);
        if (max_num - min_num > k * 2) {
            cout << "Case " << i << ": Fight" << endl;
        } else {
            cout << "Case " << i << ": Peaceful" << endl;
        }
    }
    return 0;
}
