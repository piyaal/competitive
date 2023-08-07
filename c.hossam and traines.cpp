#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<math.h>
#include <map>
#include <numeric>

int main(){
	ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int arr[n];
		for (int i=0; i<n; i++){
			cin>>arr[i];
		}
		string res = "NO";
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<i+100; j++){
				if(j==n){break;}
				int g = __gcd(arr[i],arr[j]);
				if(g>1){
					res="YES";
					break;
				}
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}
