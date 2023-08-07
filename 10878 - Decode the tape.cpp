#include<bits/stdc++.h>
using namespace std; static char s[64];
int main()
{
    int a,b,c,d,n,m,t;
    register unsigned int i;
    unsigned sum, found;

    while(gets(s)){
        unsigned int bit = 128;
        i = sum = found = 0;
        if(s[i] != '|') continue;
        for(; s[i]; ++i){
            if(s[i] == ' ')
                bit >>= 1;
            else if(s[i] == 'o'){
                sum += bit;
                bit >>= 1;
            }
        }

        printf("%c", sum);
    }
    return 0;}
