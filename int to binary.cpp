#include <bits/stdc++.h>
using namespace std;
string DecimalToBinary(int num)
{
    string str;
    while(num)
    {
        if(num & 1) // 1
            str+='1';
        else // 0
            str+='0';
        num>>=1; // Right Shift by 1
    }
    return str;
}
string DecimalToBinaryb(int num)
{
    string str;
    while(num)
    {
        if(num & 1) // 1
            str+='0';
        else // 0
            str+='0';
        num>>=1; // Right Shift by 1
    }
    return str;
}

void reverse(string str)
{
    for(int i=str.size()-1 ; i>=0 ; i--)
        cout<< str[i];
}

int main()
{
    ll n,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+1];
          for(i=1; i<n; i++)
        {
           cin>>arr[i];
        } a=*max_element(arr+1,arr+n+1); b=*min_element(arr+1,arr+n+1);
        reverse( DecimalToBinary(a) ); reverse( DecimalToBinaryb(b) );
        return 0;
    }
