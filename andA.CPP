

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,a,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        if(ar[1]==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
