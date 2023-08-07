#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,t;
    string n;
    cin >> n;
     c = 0;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            c++;
        }
    }

    if(c ==4 ||c==7 ){
      cout<< "YES";
    }
    else cout<< "NO";
}
