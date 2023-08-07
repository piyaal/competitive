#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        set<int>sst;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sst.insert(arr[i]);
        }
        b=1;
        for(i=0; i<n-1 and b==1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                b=0;

                  while(arr[i+1]>=arr[i] and i<n-1)
                {
                    i++;
                }
                if(i==n-1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                    { cout<<"NO"<<endl;

                 }
            }

        }  if(b==1) cout<<"YES"<<endl;
    }

}

