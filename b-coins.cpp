#include<bits/stdc++.h>
using namespace std;
int main()
{ int c;
cin>>c;
for(int i=c; i>=1; i--)
    {
        if(c%i==0)
        {
            cout<<i<<" ";
            c=i;
        }
    }
}

