
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,n,m,t;
    string s;
    while(cin>>s)
    {
         stringstream pial(s);
         int x = 0;
         pial >> x;
          if(x==0) break;
        b=s.length() ;
        a=0;
        for(i=0; i<b; i++)
        {
            a+=int(s[i]-48);
        }
        while(a>10)
        {
            d=a%10;
            a=a/10;
            a=a+d;
        }
        if(a==10)
            cout<<1<<endl;
        else
            cout<<a<<endl;
    }

}

