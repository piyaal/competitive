
 #include <bits/stdc++.h>
using namespace std;
#define f(i,n) for (int i=1; i <=n; i++)
int main()
{
    long long int n,c,x;
    cin >> n;
    c= 0;
    f(i,n)
    {
        cin >> x;
        c+= x;
    }
    cout << (1.0 *c/n) << endl; }
