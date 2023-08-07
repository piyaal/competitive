#include<cstdio>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    while (scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
    {
        if (!x1 && !x2 && !y1 && !y2) break;
        int x=x1-x2;
        int y=y1-y2;
        if (x<0) x*=-1;
        if (y<0) y*=-1;
        if (x1==x2 && y1==y2) printf("0\n");
        else if (x==y || x1==x2||y1==y2 )
        printf("1\n");
        else printf("2\n");
    }
    return 0;
}
