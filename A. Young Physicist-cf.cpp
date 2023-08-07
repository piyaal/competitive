#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i,k,n,sum,x,y,z,a=0,b=0,c=0;
    cin >> t;
    for(i = 1; i<= t; i++)
    {
        cin >>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if(a==0 && b==0 && c==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

