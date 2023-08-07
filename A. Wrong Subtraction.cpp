#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,n,x,y;
    cin>>n>>m;
    while(m!=0)
    {
        if(n%10==0){
            n=n/10;m--; }
        else
        {
            n--;m--;
        }
    }cout<<n<<endl;
}
