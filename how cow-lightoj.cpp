
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,t,x1,x2,y1,y2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        cin>>x1>>y1>>x2>>y2;
        cin>>c;
        for(j=1; j<=c; j++)
        {
            cin>>e>>f;
            if(((e>=x1) &&(e<=x2)) && ((f>=y1)&&(f<=y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
