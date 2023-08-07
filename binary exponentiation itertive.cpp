

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;
/*ll binexprecur(int a,int b)
{
    if(b==0)
        return 1;
    ll res=binexprecur(a,b/2);
    if(b&1)
    {
        //return a*res*res;
        //if we want to calculate modular of power
        return a*((res*res)%M)%M;
    }
    else
    {
        //return res*res;
        //if we want to calculate modular of power
        return (res*res)%M;
    }
} */
int binexpiter(ll a,ll b)
{
    ll ans=1;
    while(b){ //3^13; binary of 13 =1101
        if(b&1){
            //ans=ans*a; //while binary bit 1 then we multyply the value with ans; for last 1>3,0>3,1>3^5,1>3^13;
            //for modulo
            ans= (ans*a)%M;

        }
       // a=a*a; //increasing the value of a  3*3; then 3^2*3^2,then 3^4 * 3^4;
        //for modulo
        a=(a*a)%M;
        b>>=1; //110,then 11,then 1

    } return ans;
}
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        //cout<<binexprecur(a,b);
       cout<<binexpiter(a,b);

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
