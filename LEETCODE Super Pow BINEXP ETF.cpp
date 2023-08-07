
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int M=1e9+7;
int binexpetf(int a,int b,int m)
{
    a%=m;
    ll ans=1;
    while(b>0)  //3^13; binary of 13 =1101
    {
        if(b&1)
        {
            ans= (ans*1LL*a)%m;

        }
        // a=a*a; //increasing the value of a  3*3; then 3^2*3^2,then 3^4 * 3^4;
        //for modulo
        a=(a*1LL*a)%m;
        b>>=1; //110,then 11,then 1

    }
    return ans;
}
int superPow(int a, vector<int>& b)
{
    int bmod=0;
    for(int val:b)
    {
        bmod=(bmod*10+val)%1140;
    }
    return binexpetf(a,bmod,1337);
}
int main()
{

    ll n,m,k,t,i,a,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>a>>c;
        vector<int>b;
        for(i=1;i<=c;i++){
         cin>>k;
         b.push_back(k); }
        cout<<superPow(a,b);

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
