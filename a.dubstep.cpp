#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            s[i]=' ';
            s.erase(i+1,2);
        }

    }
    cout<<s;



}
