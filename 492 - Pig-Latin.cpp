#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s,x;
    while(getline(cin,x))
    {
        c=x.size();
        s="";
        for(i=0; i<c; i++)
        {
            if (x[i]== ' ')
            {
                if(s[0]=='A'||s[0]=='a'||s[0]=='E'||s[0]=='e'||s[0]=='I'||s[0]=='i'||s[0]=='O'||s[0]=='o'||s[0]=='U'||s[0]=='u')
                {
                    cout<<s<<"ay"<<" ";
                    s="";
                }
                else  if(s[0]!='A'||s[0]!='a'||s[0]!='E'||s[0]!='e'||s[0]!='I'||s[0]!='i'||s[0]!='O'||s[0]!='o'||s[0]!='U'||s[0]!='u')
                {
                    for(j=1;j<s.size();j++)cout<<s[j]; cout<<s[0]<<"ay"<<" ";
                    s="";
                }
            }
            else
            {
                s= s + x[i];
            }
            if(i==c-1) { if(s[0]=='A'||s[0]=='a'||s[0]=='E'||s[0]=='e'||s[0]=='I'||s[0]=='i'||s[0]=='O'||s[0]=='o'||s[0]=='U'||s[0]=='u')
                {
                    cout<<s<<"ay"<<" ";
                }
                else  if(s[0]!='A'||s[0]!='a'||s[0]!='E'||s[0]!='e'||s[0]!='I'||s[0]!='i'||s[0]!='O'||s[0]!='o'||s[0]!='U'||s[0]!='u')
                {
                    for(j=1;j<s.size();j++)cout<<s[j]; cout<<s[0]<<"ay";
                }}
        } cout<<endl;
    }
}
