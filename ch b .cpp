
#include <iostream>
using namespace std;

int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    while (t--)
    { int x,y,z;
        cin>>x>>y>>z;
        if((x+y)<z||(y+z)<x|| (z+x)<y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
