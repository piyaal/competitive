#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1001];
    char b[1001];
    while(gets(a),gets(b))
    { int i,j,k;
        string s="";

        for (i=0; i < strlen(a); i++)
            for (j=0; j<strlen(b); j++) if (a[i] == b[j])s+= a[i],a[i] ='@',b[j] ='#';
        sort(s.begin(),s.end());
        cout << s<< endl;
    }

    return 0;
}
