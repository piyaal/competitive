#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

	ll t,n,two,one,cc;
    cin>>t;
	while(t--)
	{
    cin>>n;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    two=0,one=0;cc=0;
    for(ll i=0;i<n;i++)
    {
        cc+=vec[i];
        if(vec[i]==2)
        two++;
        else
        one++;
    }

    if(cc%2==0)
    {
        if((cc/2)%2==1 && one>0)
        cout<<"YES"<<endl;
        else if((cc/2)%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
	}

}
