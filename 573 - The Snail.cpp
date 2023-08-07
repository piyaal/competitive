#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,n,m,t,h, u, f;
    while (scanf("%d %d %d %d", &h, &u, &d, &f), h || u || d || f) {
        double currU = u;
        double distMin = u * (f / 100.0);
        double currH = 0;
        int currDay = 0;

        while(true) {
            currDay++; currH += currU;
            if (currH > h){printf("success on day ");break;}
            currH -= d;
            if (currH < 0){printf("failure on day ");break;}
            currU -= distMin;
            if (currU < 0) currU = 0;
        }
        printf("%d\n",currDay);
    }

    return 0;
}
