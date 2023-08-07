#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n;
    cin >> n;
    if (n >= 0)
        cout << n << endl;
    else
    {
        ll x = n/10;
        ll y = (n/100)*10 + (n%10);

        cout << max(x,y) << endl;
    }

    return 0;
}
