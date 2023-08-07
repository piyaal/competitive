#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
string s,t;
cin>>s;
	t=s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' && i>0)
           return cout<<s,0;
		if(s[i]>='a')
            t[i]-=32;
		else
		t[i]+=32;
	}
	cout<<t;
}
