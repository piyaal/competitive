
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,n,q,i,j;
    string s;
    cin>>s;
    long long  int arr[s.size()];
    c=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='+') continue;
        else
        {
            arr[c++]=s[i]-'0';
        }
    }
    sort(arr,arr+c);
    for(i=0;i<c; i++)
    {
        if(i==c-1)cout<<arr[i]<<endl;
       else  cout<<arr[i]<<'+';
    }
}

