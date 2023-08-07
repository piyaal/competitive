 #include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string s= s1+s2;
	unordered_map<int,int>mp1;
	for(int i =0; i<s.size(); i++)
	{
		mp1[s[i]]++;
	}
	unordered_map<int,int>mp2;
	for(int i =0; i<s3.size(); i++)
	{
		mp2[s3[i]]++;
	}
	if(mp1==mp2)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}



}
