#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2  )
    { if(h1==0 && m1==0 && h2==0 &&m2 ==0) break;
        c=h1*60+m1;
        a=h2*60+m2;
        if(c<=a)
            m=a-c;
        else
        {
            if(h2==0 && h1!=0)
            {
                m=(24*60+m2)-c;
            }
            else
            {
                m=1440-(c-a);
            }
        }
        cout<<m<<endl;
    }
}
