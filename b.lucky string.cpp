#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/4;i++)
    {
        cout<<"abcd";
    }
    if (n%4==1) cout<<"a";
    else if(n%4==2) cout<<"ab";
    else if (n%4==3) cout<<"abc";
    cout<<endl;
}
