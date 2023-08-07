#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int k;
	int m;

	while (cin >> k >> m)
	{

		unsigned int gap = max(m, k) - min(m, k);

		unsigned int seconds = (43200 * (86400 - k) / gap) % 43200 + 30;
		int hour = seconds / 3600 % 12;
		int minutes = seconds / 60 % 60;
		cout << k << " " << m << " " << setfill('0') << setw(2) << (hour?hour:12) << ":" << setfill('0') << setw(2) << minutes << "\n";
	}

	return 0;
}
