#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,k,j,a,b,c, n, len;
    long long int  ans=1;
    string s;
    cin >> n;
    cin >> s;
    len=s.length();
    for(i=n ; i>0 ; i=(i-len))
    {
        ans=(ans*i);
    }
    cout << ans << endl;
}
