#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];// taking the input for the array

	}
	for (int i=0; i<n;++i){
		int mindIndex=i;//this is the min element index

		for (int j = i+1;j<n;++j)
		{
			if(a[j]<a[mindIndex])
			 mindIndex =j;
		}

	swap (a[i],a[mindIndex]);
 }
for (int i=0; i<n; ++i){
	cout<< a[i]<<" ";
 }
}
