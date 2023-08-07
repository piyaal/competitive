
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        int c=count(a.begin(),a.end(),k);
        if(c==0)cout<<"no\n";
        else if(c==1 && n!=1 && a[n-1]==k) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}
