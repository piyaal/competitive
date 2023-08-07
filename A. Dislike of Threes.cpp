#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k = 0;
		cin >> n;
		while(n)
		{
			k++;
			if(k % 3 != 0 && k % 10 != 3) n--;
		}
		cout << k << '\n';

}}
