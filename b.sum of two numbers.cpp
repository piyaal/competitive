#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;
const int N=1e5+10;
using namespace std;
int main () {
	int t, n;
	cin >>t;
	while (t--){
		cin >> n;
		int x = 0, y = 0;
		if (n % 2 == 0){
			x = n / 2 * 1.0;
			y = n / 2 * 1.0;
		}else {
			int num = 0;
			int temp = 1, m = n;
			while (n > 0){
				x += (n % 10 + num) / 2 * temp;
				num = (n % 10 + num) % 2;
				n /= 10;
				temp *= 10;
			}
			y = m - x;
		}
		cout << x << " " << y << endl;
	}
}
