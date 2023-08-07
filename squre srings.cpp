
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    ll n,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        string s,ss;
        cin>>s;
        cout << (s.substr(0, s.size()/2) == s.substr(s.size()/2) ? "YES" : "NO") <<endl;
    }
}
