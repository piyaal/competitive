#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,t,cc=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {

            if(i%2!=0)
            {
                if(i==n)
                    cc+=i;
                else
                    cc+=2*i;
            }
        }
        cout<<cc<<endl;
        cc=0;
    }
    return 0;
}
