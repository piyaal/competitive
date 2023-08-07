#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int a=0,b=0,c,i,j;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&& s[i]<='z') a++;
        else b++;
    }
    if(a>b || a==b)
    {
        for(i=0; i<s.size(); i++)
            s[i]=tolower(s[i]);
    } if(a<b )
    {
        for(i=0; i<s.size(); i++)
            s[i]=toupper(s[i]);
    } cout<<s<<endl;
}
