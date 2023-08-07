#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    while (getline(cin, s))
    {
        int len = s.length(), c= 0, cc=0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            {
                c= 1;
            }
            else
            {
                cc += c;
                c= 0;
            }
        }
        cout <<cc << "\n";
    }}
