#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,i,n,m,t;
    cin>>t;

    while(t--)
    {

        cin>>n;
        int arr[n];
        c=0,b=0;;
        for(i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            b++;
        if(arr[i]%2==1)
            c++;
        }
    cout<<min(b,c)<<endl;
    }
    }


