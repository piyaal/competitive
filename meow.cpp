#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int M=1e6+10;
bool isMeowing(string s) {
    set<char> allowed = {'m', 'M', 'e', 'E', 'o', 'O', 'w', 'W'};
    for (char c : s) {
        if (allowed.find(c) == allowed.end()) {
            return false;
        }
    }
    int n = s.size();
    int i = 0;

    while (i < n && (s[i] == 'm' || s[i] == 'M')) {
        i++;
    }

    if (i == 0) {
        return false;
    }

    while (i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
    }

    if (i == 1) {
        return false;
    }

    while (i < n && (s[i] == 'o' || s[i] == 'O')) {
        i++;
    }

    if (i == 2) {
        return false;
    }

    while (i < n && (s[i] == 'w' || s[i] == 'W')) {
        i++;
    }

    if (i != n) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (isMeowing(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
