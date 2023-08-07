

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,n,x,y,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        c=0;
        if(n==1)
        {
            cin>>a>>b;
            cout<<a<<endl;
        }
        else if(n==2) { cin>>a>>b>>c>>d; cout<<(a+b)+min(c,d); } else{ int cr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>cr[i];
            c+=cr[i];
        } int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[cr[i]];
        }  sort(cr,cr+n);
        cout<<c+arr[cr[0]]+arr[cr[1]]<<endl;
    } }
}
