#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,t,i,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a<=b)
            c=b*4+19;
        else
            c=(2*a-b)*4 +19;
        printf("Case %d: %d\n", i,c);
    }
    return 0;
}
