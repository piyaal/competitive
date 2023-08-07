#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,i,n;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> n;

		b = n/ 2;
		n=n % 2 +n / 2;
		cout << n << " "<<b << endl;
    }

}

