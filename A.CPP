#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d,m,k,n,q,i,j,p,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        if((k+p)%n==0)
            cout<<"Case "<<i<<": "<<n<<endl;
            else
                cout<<"Case "<<i<<": "<<(k+p)%n<<endl;
    }

}
