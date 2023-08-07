
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t, cc=0; cin >> t;
   while(t--)
   {
       int m,c; cin>>m>>c;
       m>c?cc++:c>m?cc--:0;

   }
   cout <<(cc>0?"Mishka":cc<0?"Chris":"Friendship is magic!^^") << endl;
}
