#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[1000];
	int c[2]={0,0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0;
	int k=n-1;
	for(int i=0;i<n;i++)
	{
		int m=i%2;
		if(a[j]>=a[k])
		{
			c[m]+=a[j];
			j++;
		}
		else
		{
			c[m]+=a[k];
			k--;
		}
	}
	cout<<c[0]<<" "<<c[1];
}
