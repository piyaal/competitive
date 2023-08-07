#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    long long int n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        ll f=0;  ll arr[n];
        map<char,int> mp;
        for(i=0; i<n; i++)
        {
        cin>>arr[i];
    }
     c=*max_element(arr, arr + n);
     for(i=0; i<n; i++)
        {
        if(arr[i]==c) f++;
    }
    if(f%2==0)
        cout<<"Zenyk"<<endl;
    else if(f%2==1) cout<<"Marichka"<<endl;
    }
}
