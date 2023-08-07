#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,i,c;
    long double tx;
    while(scanf("%ld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            tx=0;
            if(n>180000)
            {
                n-=180000;
                if(n>=300000)
                {
                    tx=(300000*10.0)/100.0;
                    n-=300000;
                    if(n>=400000)
                    {
                        tx+=(400000*15.0)/100.0;
                        n-=400000;
                        if(n>=300000)
                        {
                            tx+=(300000*20.0)/100.0;
                            n-=300000;
                            tx+=(n*25.0)/100.0;
                        }
                        else
                        {
                            tx+=(n*20.0)/100.0;
                        }
                    }
                    else
                    {
                        tx+=(n*15.0)/100.0;
                    }
                }
                else
                {
                   tx=(n*10.0)/ 100.0;
                   if(tx<2000)
                    tx=2000;
                }
            }
        c=(long int)tx;
            if(abs(c-tx)>0.0)
                c+=1;
            printf("Case %ld: %ld\n",i,c);
        }
    }
}
