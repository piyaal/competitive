#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,k, n) for (int i =k; i <n; i++)
int main(){
int n,s=0,k=0;;
cin >> n;
int ar[n];
f(i,0,n)
{
    cin >> ar[i];
    s+=ar[i];
}
sort(ar,ar+n);
int c=n-1, cc=0;
while (k<=s/2)
{
    k+=ar[c];
    c--;
    cc++;
}
cout << cc;
}
