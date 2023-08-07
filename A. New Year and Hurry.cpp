
#include<bits/stdc++.h>
using namespace std;
long long n,k,i,a,d;
int main()
{
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        a+=5*i; if(240-a>=k) d++; else break;
    }
    cout<<d<<endl;
}
