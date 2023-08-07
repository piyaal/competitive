#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll N=1e6+1;
ll arr[N+1];
int fn(int n) {

    int min_digit = n % 10;
    int max_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int digit = n % 10;
        min_digit = min(min_digit, digit);
        max_digit = max(max_digit, digit);
        n /= 10;
    }

    return abs(max_digit - min_digit);


}
int fk(int num) {
    int sd= 9, ld= 0;
    while (num > 0) {
        int d= num % 10;
        sd= min(sd, d);
        ld= max(ld, d);
        num /= 10;
    }
    return ld- sd;
}

int main() {
    for(int i=1;i<=N;i++)
    {
      arr[i]=fn(i);
    }
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ml= -1, ln= -1;
        for (int i = l; i <= r; i++) {
            if (arr[i]>= ml) {
                ml= arr[i];
            }
        }
        cout <<ml<< endl;
    }
}
