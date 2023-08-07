#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		int i=0,d=0;
		while(i<n){
			if (s[i]!=s[i+1]){
			    for (int j=i+1;j<n;j++){
			    	if (s[i]==s[j]){
			    		d=1;
					}
				}
			}
			i++;
		}
	    if (d==1){ cout<<"NO"<<endl;
		}
		else{ cout<<"YES"<<endl;
		}
	}
}
