#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b,c=0,n,m,t,i,j,k;
    string s;
    cin>>n;
    cin>>s;
    m=s.size();
    for(i=0; i<m; i++)
    {
        if(s[i]=='A')a++;
        else c++;
    }
    if(a<c)cout<<"Danik"<<endl; else if(a>c) cout<<"Anton"<<endl; else cout<<"Friendship"<<endl;
}

