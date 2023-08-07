#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
main()
{
int n;
	string s;
	cin>>n;
while(cin>>s)
{
		if(m[s]>0)
		cout<<s<<m[s]<<endl;
		else cout<<"OK"<<endl;
		m[s]++;
	}
		}
