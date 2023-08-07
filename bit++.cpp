#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,t,i,j,k;
    cin>>t;
    c=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
    }
    cout<<c<<endl;
}

