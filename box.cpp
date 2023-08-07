#include <stdio.h>
using namespace std;
int main()
{

    int i,j,row=5;

    for (i = 0; i <row; i++)
    {
        for (j=row-i; j>1; j--)
        {
            printf(" ");
        }
        for (j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}
