
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int a[4];
int main()
{
   cin>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a+1,a+4+1);
	cout<<a[4]-a[1]<<" "<<a[4]-a[2]<<" "<<a[4]-a[3];

}
