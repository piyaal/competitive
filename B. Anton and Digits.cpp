#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d,m,cc,sum=0,sum1=0;
  cin>>a>>b>>c>>d;
  m=min(a,min(c,d));
    sum=m*256;
   cc=a-m;
   if(cc>=b)
   {
        sum1=32*b;
   }
   if(b>cc)
   {
       sum1=32*cc;
   }
   cout<<sum+sum1<<endl;
 }

