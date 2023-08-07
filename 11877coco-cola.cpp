#include <stdio.h>
int main()
{
    int t=10,n,b;
    while (scanf("%d",&n)==1&&t--)
    {
        if (n==0) break;
        b=0;
        while (n>1)
        {
            if (n==2)
            {
                b++;
                break;
            }
            else
            {
                b=b+n/3;
                n=n/3+n%3;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
