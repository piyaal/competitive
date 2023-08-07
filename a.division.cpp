
#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	for(cin>>t;t--;){
		cin>>n;
		cout<<"Division "<<(n<1400?4:n<1600?3:n<1900?2:1)<<endl;
	}
	return 0;
}
