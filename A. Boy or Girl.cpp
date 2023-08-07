#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    map<string,int> m;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        x=s[i];
        m[x]=m[x]++;
    }
    if(m.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
