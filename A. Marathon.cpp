#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,i,n,m;
    cin>>n;
    while(n--)
    {
        int arr[4];
         c=0;
        for(i=1;i<=4;i++){
        cin>>arr[i];
        if(i>1)
        {
            if(arr[1]<arr[i])
                c++;
        }
     }
    cout<<c<<endl;
    }
    }


