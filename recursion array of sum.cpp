   #include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int sum (int n,int arr[]){
    //base condition
if(n<0) return 0;
return sum(n-1,arr)+arr[n];// sum of all elements n, untill n index;

}
int main()
{
	int t;
	int n;
	int q; cin>>n; int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];

	} cout<<sum(n-1,arr);
}
