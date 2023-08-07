#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	if(m<n)cout<<n - m;
	else
	{
		int c= 0;
		while(m!=n)
		{
			if(m%2==0 &&m>n) m/=2, c++;
			else m++, c++;
		}
		cout<<c<<endl;
	}
}
