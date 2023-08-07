#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,count=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int x=0,y=0;
		for(int i=0;i<n;i++)
			{
				cin>>a;
				x+=(a/30+1)*10;
				y+=(a/60+1)*15;
		}
		cout<<"Case "<<count++<<": ";
		if(x<y) cout<<"Mile "<<x<<endl;
		else if(x>y) cout<<"Juice "<<y<<endl;
		else cout<<"Mile Juice "<<x<<endl;
	}
	return 0;
}
