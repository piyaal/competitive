#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int a[100];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,x,l1=0,l2=0x3f;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			l1=0;
			cin>>x;
			sum+=x;
			if(x%2!=0)
			{
				while(x%2!=0)
				{
					l1++;
					x/=2;
				}
			}
			else
			{
				while(x%2==0)
				{
					l1++;
					x/=2;
				}
			}
			l2=min(l1,l2);
		}
		if(sum%2==0)
		{
			cout<<0<<endl;
		}
		else{
			cout<<l2<<endl;
		}
	}
}
