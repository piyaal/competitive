
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
ll n,t,i,a,b,cc=0, arr[4];
int main()
{
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3]; string s;
    cin>>s;
	for(int i=0;i<s.length();i++)
	{
		cc+=arr[s[i]-49];
	}
    cout << cc<<endl;
}
