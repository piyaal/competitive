#include<bits/stdc++.h>
using namespace std;
long long n,a;
string s;
int main(){
cin>>n;
while(n--){
cin>>s;
if(s[0]=='T') a+=4;
else if(s[0]=='C') a+=6;
else if(s[0]=='O') a+=8;
else if(s[0]=='D') a+=12;
else a+=20;
}
cout<<a<<endl;
}
