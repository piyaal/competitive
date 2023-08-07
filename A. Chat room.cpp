
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,t;
    string s,v;
    cin>>s;
    v="hello";
    c=0;
    for (int i = 0; i <s.length(); i++)
        if (s[i] == v[c])
            c++;
    if (c== 5)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;


}
