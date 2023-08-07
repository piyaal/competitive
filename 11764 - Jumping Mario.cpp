
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    cin>>t;
    n=0;
    while(t--)
    {
        int arr[1000];
        cin>>l;
        n++; c=0,d=0;
            for(i=1; i<=l; i++)
            {
                cin>>arr[i];
            } if(l>1){
            for(i=2; i<=l; i++)
            {
                if(arr[i]>arr[i-1])
                {
                    c++;
                }
                else if(arr[i]<arr[i-1])  d++;}printf("Case %d: ", n);
                cout<<c<<" "<<d<<endl;
            }
            else  if(l==1)
            {
                printf("Case %d: ", n);
                cout<<0<<" "<<0<<endl;
            }
        }
    }

