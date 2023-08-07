#include<bits/stdc++.h>
using namespace std;
int main()
{  int ans,i,a,j,c,t,b;
	string ar[100];
	cin>>a>>b;
	for(i=1;i<=a;i++)
	cin>>ar[i];c=0;
	for(i=1;i<=a;i++)
	for(j=0;j<b;j++)
	if(ar[i][j]=='W'&&(ar[i+1][j]=='P'||ar[i-1][j]=='P'||ar[i][j-1]=='P'||ar[i][j+1]=='P'))c++;
	cout<<c;
}
