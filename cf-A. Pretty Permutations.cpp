#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>2 && n%2==0)
        {

            i=1;
            while(i<=n-1)
            {
                a=i++;
                b=i++;
                cout<<b<<" "<<a<<" ";
            }
            cout<<endl;

        }
    else if(n>2 && n%2==1)
        {
   cout<<3<<" "<<1<<" "<<2<<" ";
            i=3;
            while(i<=n-1)
            {
                a=i++;
                if(a==3)
                    {
                        a=i++;
                        b=i++;
                        cout<<b<<" "<<a<<" ";
                    }
                    else
                    {
                        b=i++;
                cout<<b<<" "<<a<<" ";
            }
            }
           cout<<endl;

        }
        else
            cout<<2<<" "<<1<<endl;

    }
}
