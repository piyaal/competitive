
#include<bits/stdc++.h>
using namespace std;
long long n,a,i,b,c;
string s;
  bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main(){
cin>>n;
while(n--){
cin>>a>>b; c=a+b;
isPrime(c) ? cout << "Alice\n" : cout << "Bob\n";

}
}
