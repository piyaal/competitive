
#include <bits/stdc++.h>>
using namespace std;
int main()
{
    int a,b,c,d=0,T,n,e=0;
    while(cin>>T)
    {
        e=0;
        for(b=1; b<=T; b++)
        {
            scanf("%d", &n);
            while(n)
            {
                c=n%2;
                d+=c;
                n/=2;
            }
            e++;
            if(d%2==0)
                printf("Case %d: even\n",e);
            else
            {
                printf("Case %d: odd\n",e);
                d=0;
            }
        }
    }
    return 0;
}
