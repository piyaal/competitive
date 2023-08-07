
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1,i,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        string s;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[4]!='s')s.insert(4,"s");
        }
         cout<<"Case "<<j<<": "<<s<<endl;
    }
}
