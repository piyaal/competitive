
   #include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int fact (int n){
    //base condition
if(n==0) return 1;
return fact(n-1)*n;// factorial upto n

}
int main()
{
	int n;
	cin>>n; int arr[n];
	 cout<<fact(n);
}
