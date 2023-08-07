#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int max_glass = max(a, max(b, c));
        int sum = a + b + c;
        if (sum % 3 == 0 && sum / 3 >= max_glass && (sum / 3 - max_glass <= k * 2)) {
            cout << "Case " << i << ": Peaceful" << endl;
        } else {
            cout << "Case " << i << ": Fight" << endl;
        }
    }
    return 0;
}
