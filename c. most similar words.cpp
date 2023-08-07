#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,n,q,i,j,k,t;
    cin>>t;
    while(t--)
    {
         cin>>n>>m;
		string s[n];
        a= INT_MAX;

		for(int i=0;i<n;i++)
			cin>>s[i];

		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				c=0;
				for(k=0;k<m;k++)
					c+=abs(s[i][k]-s[j][k]);

				a=min(a,c);
			}
		}
		cout<<a<<endl;} }
