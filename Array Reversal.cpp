#include<stdio.h>
int main()
{
    long long int a,b,c,n,m,t,i,j,k;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n; i>=1; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
