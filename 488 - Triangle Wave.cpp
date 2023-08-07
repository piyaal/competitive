#include<bits/stdc++.h>
using namespace std;const char *arr[] = {"", "1", "22", "333", "4444", "55555", "666666", "7777777", "88888888", "999999999"};

int main()
{
    long long int b,c,d,i,n,m,t,k;
    cin>>n;

    while(n--){
long long int amp, times;
        cin>>amp>>times;

        while(times--){
            for(i = 1; i < amp; ++i)
                printf("%s\n", arr[i]);

            for(k = i; k; --k)
                printf("%s\n", arr[k]);

            if(times || n)
                cout<<endl;
        }
    }
    return 0;
}
