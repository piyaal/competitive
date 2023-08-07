#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],c;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				c = max(i,2)-min(i,2)+max(j,2)-min(j,2);
		}
	}
    cout <<c<<endl;
}
