
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,n,m,t,ar[100];
    string s;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        c=0;
        d=0;
       for(j=1;j<=10;j++)
       {
           cin>>ar[j];
       }
       if(ar[1]<ar[10])
       {
       for(k=1;k<=9;k++)
       {
           if(ar[k]<ar[k+1])
           {
               c=1;
           }
           else
           {
               c=0;
               break;
           }
       }
       }
       else if(ar[1]>ar[10])
       {
       for(k=1;k<=9;k++)
       {
           if(ar[k]>ar[k+1])
           {
               d=1;
           }
           else
           {
               d=0;
               break;
           }
       }
       }
       if(c==1 || d==1)
       {
           cout<<"Ordered"<<endl;
       }
       else
       {
           cout<<"Unordered"<<endl;
       }

    }
    return 0;
}
