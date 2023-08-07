#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, b, c;
    cin >> n >> m >> a;
    b = n / a;
    c = m / a;
    if( n % a != 0)
        b++;
    if( m % a != 0)
        c++;
    cout << b * c;
}
