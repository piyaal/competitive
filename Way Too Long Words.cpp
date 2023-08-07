
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,t,i,j,k;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>s;
        n=s.length();
        if(n>10)cout<<s[0]<<n-2<<s[n-1]<<endl;
        else cout<<s<<endl;
    }
}
