#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,f,i,j,n,m,l,t,cc;
    string s;
    cin>>n;
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        m = f = 0;
        int len = s.size();
        for(i=0; i<len; i++)
        {
            if(s[i]=='M')
                m++;
            else if(s[i]=='F')
                f++;
        }
        if(f==m && m>=2)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
}
