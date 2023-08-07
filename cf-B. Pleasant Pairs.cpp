#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,t,n,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int arr[n],brr[2*n+1];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

       int cnt=0;
   for (i=1;i<=n;i++) {
			for (j=arr[i]-i;j<=n;j+=arr[i]) {
				if (j<=i) {
					continue;
				}
				if (i+j==arr[i]*arr[j]) {
					c++;
				}
			}
		}
		cout <<c<< endl;
        c=0;
    }
}
