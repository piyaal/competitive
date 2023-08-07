
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d,m,k,n,q,i,j,p,t,sum;
     cin>>t; string s;
     while(t--)
     {
         cin>>s;
           m= s.length();
          c=0,sum=0;
         for(i=0;i<m; ++i)
         {
             if(s[i]=='O'){
                c++;
                sum+=c;
             }
             else
                c=0;
         }
         cout<<sum<<endl;
     }
}
