#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,i,j,t,n,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a=99999999;
        c=0;
        long long int arr[n],brr[2*n+1];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            a=min(arr[i],a);
        }

    for (i=1;i<=n;i++) {
			c=c+arr[i]-a;
			}

		cout <<c<< endl;
    }
}
