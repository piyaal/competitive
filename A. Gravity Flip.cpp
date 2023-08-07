


#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,a,c;
        cin>>n;
        long long int ar[n+1];
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n); for(i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        } cout<<endl;
    }
