#include <iostream>
#include <vector>
using namespace std;

// Function to find prime factors of a number
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i <= n/i; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

// Function to find divisors of a number
vector<int> findDivisors(int n) {
    vector<int> divisors;
    vector<int> factors = primeFactors(n);
    divisors.push_back(1);
    int lastFactor = 1;
    int count = 0;
    for (int factor : factors) {
        if (factor == lastFactor) {
            count++;
        } else {
            int sz = divisors.size();
            for (int i = 0; i < sz; i++) {
                int val = divisors[i];
                for (int j = 0; j < count; j++) {
                    val *= lastFactor;
                    divisors.push_back(val);
                }
            }
            lastFactor = factor;
            count = 1;
        }
    }
    int sz = divisors.size();
    for (int i = 0; i < sz; i++) {
        int val = divisors[i];
        val *= lastFactor;
        divisors.push_back(val);
    }
    return divisors;
}

// Function to find sum of divisors of a number
int sumDivisors(int n) {
    vector<int> divisors = findDivisors(n);
    int sum = 0;
    for (int divisor : divisors) {
        sum += divisor;
    }
    return sum;
}

// Main function
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Divisors of " << n << ": ";
    vector<int> divisors = findDivisors(n);
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
    int sum = sumDivisors(n);
    cout << "Sum of divisors of " << n << ": " << sum << endl;
    return 0;
}
