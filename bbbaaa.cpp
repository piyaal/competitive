#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sss;
        long long l, r, x, a, b;
        cin>>l>>r>>x>>a>>b;
        if(a==b)
        {

            cout<<0<< endl;
        }
        if(!(b>=l&& b<= r)) cout << -1 <<endl;
        if(a <b)
        {
            if((a + x == b)||(a + x < b)) cout << 1 << endl;
            else if((b + x <= r)||(a -x >= l)) cout << 2<<endl;
            else if((b - l >= x) && (a + x <= r)) cout << 3 << endl;
            else cout << -1 <<endl;
        }
        if((a - x == b) || (a -x > b)) cout << 1 <<endl;
        else if((b - x >= l) || (a + x <= r)) cout << 2 <<endl;
        else if((r-b>= x) && (a - x >= l)) cout << 3 << endl;
        else cout << -1 << endl;
    }
