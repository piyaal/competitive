
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a,d, c;
    map<char,int> mp;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
       char  x=s[i];
        mp[x]++;
    }
    if(mp['A']>mp['D']) cout<<"Anton"<<endl;
    else if(mp['A']<mp['D']) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

}
