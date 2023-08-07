

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    while (t--)
    { int x,y,z;
         cin>>n>>x>>y; c=log2(n);
        cout<<c*x+ (c-1)*y<<endl;
    }
    return 0;
}
