#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int n,i,j,k;
    string s,r;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s; r=s;reverse(r.begin(), r.end());
        if(s==r)cout<<"Case "<<i<<": Yes"<<endl;
                else  cout<<"Case "<<i<<": No"<<endl;
        }
return 0;
}
