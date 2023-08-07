#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int middleOfThree(int a, int b, int c)
{
    // Checking for b
    if ((a < b && b < c) || (c < b && b < a))
        return b;

    // Checking for a
    else if ((b < a && a < c) || (c < a && a < b))
        return a;

    else
        return c;
}
int main()
{
    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout << middleOfThree(a, b, c)<<endl;
    }
    return 0;
}
