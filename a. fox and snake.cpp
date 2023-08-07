 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,j;
 t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int flag  =  0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (i%2==0)
				cout<<"#";
			else if (flag == 0)
			{
				if (i%2!=0&&j!=m - 1)
				{
					cout << ".";
				}
				else if (j==m-1) {
					cout << "#";
					flag=flag^1;
				}
			}
			else {
				if (i%2!=0&&j!=0)
				{
					cout<<".";
					if(j==m-1)
					{
						flag=flag^1;
					}
				}
				else {
					cout<<"#";

				}
			}
		}
		cout << endl;
    }

}
}
