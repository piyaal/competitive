
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
vector<int>divisors[N];
int main()
{
    for(int i=2; i<N; i++)
    {
        for(int j=i; j<N; j+=i)
        {
            divisors[j].push_back(i);
        }
    }
    for(int i=1; i<10; i++)
    {
        for(int div : divisors[i]) {
            cout<<div<<" ";
            } cout<<endl;
    }
}
