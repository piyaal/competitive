#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    while(cin>>a>>b>>c>>d)
    {
        cc=b+100;
        for(i=0; i<c; i++)
        {
            int p; cin>>p;
            int temp=0;
            for(j=0; j<d; j++)
            {
                cin>>n;
                if(n>=a)
                {
                    temp=p*a;
                    if(cc>temp)
                    {
                        cc=temp;
                    }
                }
            }
        }
        if(cc<b)
        {
            cout<<cc<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
}
