

#include<bits/stdc++.h>
using namespace std;
long long n,k,i,a,d;
int main()
{
    cin>>n>>k;

    cout<<min(n,k)<<" "<<(max(n,k)-min(n,k))/2<<endl;
}
