

   #include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dgtsum(int n){
    //base condition
if(n==0) return 0;
return dgtsum(n/10)+n%10;// excuding last digit and add to recursion

}
int main()
{
	int n;
	cin>>n;
	 cout<<dgtsum(n);
}
