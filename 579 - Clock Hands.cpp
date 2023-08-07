#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,h,angl,ha,ma;
     while(scanf("%lf:%lf",&h,&m)==2)
    {
        if((h==0) && (m==0))break;
        ha=(h*60+m)*0.5;
        ma=m*6;
        angl=(ha-ma);
        if(angl<0)
            angl=angl*(-1);

        if (angl>180)
            angl=360-angl;

        printf("%.3lf\n",angl);
    }
}
