#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
#define all(x) (x).begin(), (x).end()
int main()
{
    long long int i,n, t,a;
    cin>>t;
    while (t--)
    {
		string s;
		cin>>s;
		int a=s[0]-'0'-1;
		int n=s.size();
		cout<<a*10+n*(n+1)/2<< endl;
    }
}
