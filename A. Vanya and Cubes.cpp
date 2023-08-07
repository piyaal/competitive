
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d=0;
	cin>>n;
	while(n>=0){
		d++;
		n-=d*(d+1)/2;
	}
	cout<<d-1;
}
