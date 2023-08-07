#include<stdio.h>
int main(){
    register unsigned n, i;
    unsigned m, a, max, c = 1;

    scanf("%u", &n);
    while (n--){

        scanf("%u%u", &m, &max);
        m -= 1;
        while (m--){
            scanf("%u", &a);
            if (a > max)
                max = a;
        }
        printf("Case %u: %u\n", c++, max);
    }
    return 0;
}
