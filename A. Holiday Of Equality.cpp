#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,c;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)cin>>arr[i];
    sort(arr,arr+n);
    c=0;
    for(i=0; i<n; i++)c+=(arr[n-1]-arr[i]);
    cout<<c<<endl;
}
