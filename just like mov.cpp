

#include <iostream>
using namespace std;

int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    while (t--)
    { int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(z%((w*y)+x)==0) cout<<"YES"<<endl;
    else  if(z%((w*y)+x)-(w*(y-1))>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
