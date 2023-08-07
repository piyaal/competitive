#include<bits/stdc++.h>
using namespace std;
long long n,k,i,a,d;
int main()
{
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<=5-k)d++;
    }
    cout<<d/3;
}
