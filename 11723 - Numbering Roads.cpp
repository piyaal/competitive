
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    c=0;
    while(cin>>m>>n && m!=0 && n!=0)
    {
        c++;
        printf("Case %d: ", c);
         if (m>n)
        {
            if ((m-n)%n==0) d=(m-n)/n;
            else d=((m-n)/n)+1;
        }
        else d=0;
            if(d>26)
                cout<<"impossible"<<endl;
            else
        cout<<d<<endl;
    }
}
