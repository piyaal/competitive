
#include <iostream>
using namespace std;

int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    while (t--){
    int x,y,z;
    cin>>n; //for(int i=1;i<=n;i++)
    if(n==2) cout<<1<<' '<<3<<endl;
    else if( n&1)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<1<<' ';
        }
        cout<<endl;
    }
    else
    {
        cout<<1<<' '<<2<<' '<<3<<' ';
        for(int i=4; i<=n; i++)
        {
            cout<<2<<' ';
        } cout<<endl;
    }
}
}
