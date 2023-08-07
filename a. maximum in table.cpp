
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int a , b = 1;
	cin >> a ;
	for(int i = 1 ; i < a ; i++)
    {
		b = (b * (2 * a - 1 - i) / i);
	}
	cout<<b<<endl;
}
