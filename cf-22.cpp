#include<bits/stdc++.h>
using namespace std;
int main (){
int a,b,c,t,n;
cin>>t;
while(t--)
{    c=0;
 cin>>n; int x;
int arr[n+1];
for(int i=0;i<n;i++)
{
 cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n-1;i++)
{
x=__gcd(arr[i],arr[i+1]); if(x>1){ c=1;}
}
if(c==1) cout<<"YES"<<endl; else cout<<"NO"<<endl;
}
}
