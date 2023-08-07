
#import<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n, t,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n%2==0)n/=2;
        cout<<(n==1?"NO":"YES")<<endl;
    }
}
