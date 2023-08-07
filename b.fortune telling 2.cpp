#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int a=0,b=0,c,i,j,t,n,m;
    cin>>n;
    int arr[n+1];
    m=999999;
    for(i=0; i<n; i++)
    {
        cin>>c;
        a+=c;
        if(c%2!=0)
        {
            b++;
            if(c<=m) m=c;
        }
    }
    if(a%2!=0)
        cout<<a<<endl;
    else
    {
        if(n<2 || (a%2==0 && b==0)) cout<<"0"<<endl;
                else if(b>0)  cout<<a-m<<endl;
        }
}


