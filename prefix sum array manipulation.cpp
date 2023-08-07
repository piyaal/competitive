#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];
int main(){
int n,m;
cin>>n>>m;

while(m--){
    int a,b,c,d;
    cin>>a>>b>>d;
    //pre compute by adding values in given range;
    arr[a]+=d;arr[b+1]-=d;
}
//prefix sum;
for(int i=1;i<=n;i++){
    arr[i]+=arr[i-1];
}
long long mx=*max_element(arr+1, arr + n+1);
cout<<mx<<endl;

}
