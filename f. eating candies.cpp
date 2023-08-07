#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,w[200005]= {0};
        cin>>n;
        for(int i=0; i<n; i++) cin>>w[i];

        int num=0,sum=0;
        for(int i=0,j=n-1; i<=j;)
        {
            if(sum>0) sum-=w[j--];
            else sum+=w[i++];

            if(sum==0) num=i+n-j-1;
        }
        cout<<num<<endl;
    }
    return 0;
}
