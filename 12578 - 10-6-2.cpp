#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i,n;
    double aa,ga,ra,w,r,l;
    scanf("%d",&n);
    while(n--)
        {
            scanf("%lf",&l);
            w=(l*6)/10.0;
            aa=l*w;
            r=l/5.0;
            ra=(M_PI*r)*r;
            ga=aa-ra;
            printf("%.2lf %.2lf\n",ra,ga);
        }

}
