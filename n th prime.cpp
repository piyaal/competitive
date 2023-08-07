
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,n,q,i,j;
    cin>>n;
    if(n==1)cout<<2<<endl;
    else if(n==2)cout<<3<<endl;
    else if(n==3)cout<<5<<endl;
    else if(n==4)cout<<7<<endl;
    else
    {
        a=(n*(n+1)/2 )-n;
        while(a--)
        {
            c=0;
            for(i=2; i<=a/2; i++)
            {
                if(a%i==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                cout<<a<<endl;
                break;
            }
            else continue;
        }
    }
    main();
}
