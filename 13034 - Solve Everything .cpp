#include<stdio.h>
int main()
{
    int n,i,j,a,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    flag=0;
        for(j=1;j<=13;j++){
            scanf("%d",&a);
            if(a==0)
                flag=1;
        }if(flag==0)
       printf("Set #%d: Yes\n",i);
       else
        printf("Set #%d: No\n",i);
    }
}
