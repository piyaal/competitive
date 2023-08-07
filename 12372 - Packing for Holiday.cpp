

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    cin>>t;
    d=0;
    while(t--)
    {
        d++;
        cin>>a>>b>>c;
        printf("Case %d: ", d);
        if(a<=20 && b<=20 && c<=20) cout<<"good"<<endl;
        else
            cout<<"bad"<<endl;
    }
}
