
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,i,j,n,m,l,t;
    string s;
    while(getline(cin,s))
    {
    l=s.size();
    c=-1;
    for(i=0;i<l;i++)
    {
    if(s[i]==' ')
    {
    for(j=i-1;j>c;j--){
    cout<<s[j];
    }cout<<" ";
    c=i;
    }
    }
   for(i=l-1;i>c;i--){
    cout<<s[i];
   }
    cout<<endl;
    }
    return 0;
}



