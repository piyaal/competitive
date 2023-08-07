
#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{

    int t,ox,oy,ax,ay,bx,by,c=1;
    cin>>t;
    while(t--)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        double r=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
        double a=sqrt(pow((ox-bx),2)+pow((oy-by),2));
        double b=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
        double o=sqrt(pow((ax-bx),2)+pow((ay-by),2));

        double theta=acos((a*a+b*b-o*o)/(2.0*a*b));
        double s=r*theta;

        printf("Case %d: %.10f\n",c++,s);

    }
}
