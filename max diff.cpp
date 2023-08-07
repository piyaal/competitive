
#include<bits/stdc++.h>
using namespace std;
using namespace std;
const int N=1e6+10;
int arr[N];
int fn(int n)
{
   int mx= 0;
	int mn = 9;
	while (n > 0) {
		if (mx<n% 10) mx= n%10;
		if (mn >n% 10) mn=n% 10;
		n/= 10;
	}
	return mx- mn;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r,c;
        cin>>l>>r;
        c=-1;
        int max=-1, ans=-1;
		while (max!= 9&&l<= r) {
			if (max <fn(l)) {
				max = fn(l);
				ans=l;
			}
			l++;
		}
		cout <<ans<< endl;
    }
}
