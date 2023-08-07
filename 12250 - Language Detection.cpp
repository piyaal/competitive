
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t;
    string s; c=0;
  while(cin>>s && s[0]!='#')
    {  c++;
         printf("Case %d: ", c);

        if (s== "HELLO")
            cout<<"ENGLISH"<<endl;
        else if (s== "HOLA")
            cout<<"SPANISH"<<endl;
        else if (s== "HALLO")
            cout<<"GERMAN"<<endl;
        else if (s== "BONJOUR")
            cout<<"FRENCH"<<endl;
        else if (s == "CIAO")
            cout<<"ITALIAN"<<endl;
        else if (s== "ZDRAVSTVUJTE")
            cout<<"RUSSIAN"<<endl;
        else
        cout<<"UNKNOWN"<<endl;
    }
}
