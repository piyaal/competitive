
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int N=1e9+10;
#define ll long long int
ll n,t,a,b,c,m;

int main()
{
    cin>>t;
    while(t--)
    {
        long long int n,c;
        c=0;
        cin>>n>>m;
        long long arr[n+1]= {0},brr[m+1]= {0};
        priority_queue<int,vector<int>,greater<int>> qq;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            qq.push(arr[i]);
        }
        sort(arr,arr+n);
        for(int j=0; j<m; j++)
        {
            cin>>brr[j];
            qq.pop();
            qq.push(brr[j]);
        }
        sort(brr, brr+m, greater<ll>());
        c=0;
        while(!qq.empty())
        {
            c+=qq.top();
            qq.pop();
        }
        /*for(int i=0; i<n; i++)
        {
            if(i<m)
                c+=brr[i];
            else
            {
                if(n>m)
                    c+=arr[i];
                else if(n<m) break;
            }
        }*/
        cout<<c<<endl;
    }
}
