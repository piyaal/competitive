
#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for (int i=0; i <n; i++)
#define ll long long int
int main()
{
    ll t,n,k,i,a,b,c,d; cin>>t; while(t--){ cin>>n>>k;
    multiset<ll> bags; f(i,n) {
    ll canct; cin>>canct; bags.insert(canct);
    }
    ll total; f(i,k);{
      auto last_it=(--bags.end());
      ll candy=*last_it;
      total+=candy; bags.erase(last_it);bags.insert(candy/2);
    } cout<<total<<endl;
    }}
