#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,k, n) for (int i =k; i<=n; i++)
int main(){
int n,a,b,c=0,s=0;
cin>>n; f(i,1,n)
   {
     cin>>a>>b; if(b-a>1) c++;
   }
   cout<<c<<endl;
  }

