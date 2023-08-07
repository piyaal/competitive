#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,t,n,r0,c0,r1,c1,cc;
    cin>>c;
    while(c--)
    {
        cin>>t>>n;
        while(t--)
        {
            cin>>r0>>c0>>r1>>c1;
            if(r0==r1 && c0==c1) cc=0;
            else if(abs(r0-r1)==abs(c0-c1)) cc=1;
            else if(abs(r0-r1)%2==abs(c0-c1)%2)cc=2;
            else cc=-1; if(cc==-1) cout<<"no move"<<endl; else cout<<cc<<endl;
        }
    }
}
