
#include<bits/stdc++.h>
using namespace std;
#define max 1000

int main()
{
    int c, n, value[max],i,count,total,j;
    double avg, result;
    while(scanf("%d",&c)==1)
    {
        for(j=1; j<=c; j++)
        {

            total=0;
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                scanf("%d",&value[i]);
                total+=value[i];
            }
            avg=(double)total/(double)n;
            count=0;
            for(i=1; i<=n; i++)
            {
                if(value[i]>avg)
                    count++;
            }
            result=(double)(100*count)/(double)n;
            printf("%.3f%%\n",result);
        }
    }
    return 0;}
