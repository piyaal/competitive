#include<bits/stdc++.h>
using namespace std;

unordered_map<long long int,int> solve()
{
    unordered_map<long long int,int> v;
    unordered_map<long long int,int> res;
    v[4]++;
    for(long long int i=3;i<1000000;i=i+2){
        if(res[i]==0){
            v[i*i]++;
            for(int j=i;j<=1000000;j=j+i){
                res[j]=1;
            }
        }
    }
    return v;
}



int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    unordered_map<long long int,int> map = solve();
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(map[a[i]]!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }


}
