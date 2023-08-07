#include<bits/stdc++.h>
using namespace std;

string findMinCostBinaryString(const string& s) {
    string binaryString = s;
    int n = binaryString.length();

    // Replace each '?' with '0' or '1' based on the remaining characters
    for (int i = 0; i < n; i++) {
        if (binaryString[i] == '?') {
            // Check if the remaining characters are in non-descending order
            bool isNonDescending = true;
            for (int j = i + 1; j < n; j++) {
                if (binaryString[j] != '?' && binaryString[j] < binaryString[j - 1]) {
                    isNonDescending = false;
                    break;
                }
            }

            // Assign '0' if remaining characters are in non-descending order, otherwise '1'
            binaryString[i] = isNonDescending ? '0' : '1';
        }
    }

    return binaryString;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        string result = findMinCostBinaryString(s);
        cout << result << endl;
    }

    return 0;
}
