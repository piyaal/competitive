#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    while (cin >> s)
    {
        string decoded;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            decoded += s[i] - 7;
        }
        cout << decoded << endl;
    }

    return 0;
}
