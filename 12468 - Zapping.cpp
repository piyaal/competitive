
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    while(cin>>m>>n && m!=-1 && n!=-1)
    {
         if (m>n)
        {
            c = m -n;
            d= n + 100 - m;

        }
        else
        {
            c = n - m;
            d= m + 100 - n;
        }
        cout<<min(c, d)<<endl;
    }
}
