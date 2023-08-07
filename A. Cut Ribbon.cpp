#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
int main(){
    ll t,i;
    t= 1;
  //  cin>>test;
    while(t--){
        ll n ,a[3];
        cin>>n>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        ll arr[n + 1] = {0};
        for(ll i = 1 ; i < n + 1 ; i++){
            arr[i] = -5000;
            if(i >= a[0]) arr[i] = max(arr[i] ,arr[i-a[0]] + 1);
            if(i >= a[1]) arr[i] = max(arr[i] , arr[i - a[1]] + 1);
            if(i >= a[2]) arr[i] = max(arr[i] , arr[i - a[2]] + 1) ;
        }
        cout<<arr[n]<<endl;
    }
}
