
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
void printbinary(int num)
{
    for(int i=31; i>=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    ll n,m,k,t,i,a,b,c;

    cin>>n;
    printbinary(n);
    a=n;
    cout<<"find i th bit is set or unset"<<endl;
    cin>>i;

    if((a & (1<<i))!=0)
        cout<<"YES,set bit"<<endl;//1
    else cout<<"NO,unset bit"<<endl; //0

    cout<< "nth bit change to set bit"<<endl;

    ll stbit,unstbit;
    cin>>stbit;
    printbinary(a| (1<<stbit));//1

    cout<< "nth bit change to unset bit"<<endl;//0
    cin>>unstbit;
    printbinary(a& (~(1<<unstbit)));


    cout<<"toggle a bit"<<endl;
    cin>>k;
     printbinary(a^(1<<k));


}
