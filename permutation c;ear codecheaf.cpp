#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,t,i,j,k;
    cin>>t;
    while(t--)
    {    unordered_map <int,int>mp;
        cin>>n;
        int arr[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];mp[arr[i]]=i;
        }

        for(auto pr :mp){
        cout<<pr.second<<endl;break;
    } }
}
