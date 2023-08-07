#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c,mco,cco;
    cin>>t;
    while(t--)
    {
    cin >> n;
    string s;
    cin >> s;
    mco= 1;
    cco= 1;

        for (i=0;i<n-1;i++) {
            if (s[i]==s[i+1]) {

                cco++;
            } else {
                mco=max(mco,cco);cco=1;
            }
        }

        mco= max(mco, cco);

        cout<<mco+1<< endl;
    } }
