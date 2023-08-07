
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c = 1, x,y,z;
    while(t--)
    {
        cin>>x>>y>>z;
        if((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x))
        {
            cout << "case" <<c<<": yes" <<endl;
        }
        else
        {
            cout << "Case "<<c <<": no" <<endl;
            ++c;}}}
