#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt;
    cin>>cnt;
    while(cnt--){
   long long int  a,b,c; //n,x,c
   cin>>a>>b>>c;
   vector<int>v(a);
   for(auto&it:v)cin>>it;
   long long int mn = 0;
   for(auto&it:v)
   {
      if(it>=b)continue;
      long long int value = b-it;
      if(value>c)
      {
         it = b;
         mn+=c;
      }
   }
 long long  sum = accumulate(v.begin(),v.end(), 0LL);
   long long  final = sum-mn;
   cout<<final<<endl;
}
return 0;
}
