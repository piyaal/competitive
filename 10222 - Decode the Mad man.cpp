#include<bits/stdc++.h>
using namespace std;
const char keyboard[]="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
int main () {
 string s;
 getline(cin,s);
 for(int i =0;i<s.length();i++){
  if(s[i]==' '){
   cout<<" ";
  }else{
   for(int j=0;j<sizeof(keyboard);j++){
    if (toupper(s[i])==keyboard[j])
     printf("%c",tolower(keyboard[j-2]));
   }
  }
 }
 cout<<""<<endl;}
