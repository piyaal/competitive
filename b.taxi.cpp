#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,cc;
    cin >> t;
    int arr[5] = {0};
    for(i=1; i<=t; i++)
    {
        cin >>n;
        arr[n]++;
    }
    cc= arr[4] + arr[3] + arr[2] /2;
    arr[1]  = arr[1] - arr[3];
    if(arr[2] % 2 == 1)
    {
        cc++;
        arr[1] = arr[1] - 2;
    }
    if(arr[1] > 0)
    {
        cc+= (arr[1] + 3) / 4;
    }
    cout << cc<<endl;
}
