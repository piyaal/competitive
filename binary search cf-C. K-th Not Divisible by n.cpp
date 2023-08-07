#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main(){

	ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
		cin>>n>>k;
		ll lo=1 ,hi=1e18,mid;
		c= 1e18;
		while(lo<=hi){
			mid =(lo+hi)/2;
			if(mid-(mid/n)<k ){

				lo=mid+1;
			}
			else {hi= mid-1;c=min(c,mid); }
		}
		cout <<c<< endl;
	}

}
