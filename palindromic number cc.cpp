


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }

    int i=1,j=n;
  int cc= 0;

  while(i<=j)
  {
    if(arr[i] == arr[j]) {i++, j--;}
    else if(arr[i] < arr[j]){ arr[j]-=arr[i], i++, cc++; }
    else { arr[i]-=arr[j],j--, cc++;} }
  cout<<cc<<endl;
    }
    return 0;
}
