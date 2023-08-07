#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,t;

	while (cin>>n>>m) {
		int  ok,x;t=0;
		for ( i = 0; i < n; i++) {
			  c=0;
			for (int j = 0; j < m; j++) {
				scanf("%d", &x);
				if(x>0) c++;
			} if(c==m)
			t++;
		}
		cout<<t<<endl;
	}
	return 0;
}
