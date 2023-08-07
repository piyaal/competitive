#include<bits/stdc++.h>
using namespace std;
#define N 10002
static char s[N];
static char output[N];
int main(){
    int n;
    scanf("%d", &n);
    getchar();


    while( n-- ){
        gets(s);
        int len = strlen(s);
        int rc = sqrt(len);
        memset(output, 0, sizeof output);
        if( rc * rc == len ){

            int k = 0;

            for( int j = 0; j < rc; ++j ){
                for( int i = j; i < len; i = i + rc ){
                    output[k++] = s[i];
                }
            }

            puts(output);

        }
        else{
            puts("INVALID");
        }

    }


    return 0;
}
