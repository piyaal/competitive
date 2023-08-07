#include<bits/stdc++.h>
using namespace std;
int n,x,z,y,a;
int main()
{
cin>>n;
while(n--)
{
cin>>x;
if (x>=a) y++;
else y=1;
if (y>=z) z=y;
a=x;
}
cout<<z<<endl;
}
