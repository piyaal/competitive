
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,t;
    cin>>t;
    while(t--)
    {
        cin >> a >> b >> c;
        cout << ((a + b == c || c + a == b || b + c == a) ? "YES\n" : "NO\n");
    }
}
