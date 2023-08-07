
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,k, n) for (int i =k; i <=n; i++)
int main()
{
    int n;
    cin>>n;
    cout<<(n%4==0||n%7==0||n%47==0||n%74==0||n%477==0 ? "YES":"NO")<<endl;
}

