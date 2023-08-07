#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main(){
	int n,num;
	cin>>n;
	set<int> s;
	for(int i=n+1;;i++){
		num=i;
		while(num>0){
			s.insert(num%10);
			num/=10;
		}
		if(s.size()==4){
			cout<<i; return 0;
		}
		s.clear();	}
}
