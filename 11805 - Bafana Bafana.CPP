#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,n,m,t;
    string s;
    cin>>t;

    while(t--)
    {
        c=0;
        d=0;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='O')
            {
                c++;
                d+=c;
            }
            else
                c=0;
        }
        cout<<d<<endl;

    }
}

