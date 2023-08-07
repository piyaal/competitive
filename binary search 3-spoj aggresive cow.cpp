#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
int n,cows;
int  position[N];
bool canplacecow(int mindist)
{
    int lastpos=-1;
    int cows_ct=cows;
    for(int i=0; i<n; i++)
    {
        if(position[i]-lastpos>=mindist || lastpos==-1)
        {
            cows_ct--;
            lastpos=position[i];
        }
        if(cows_ct==0) break;
    }
    if(cows_ct==0)return true;
    return false;

}
int main ()
{
    long long int a,b,t,q,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>cows;
        for(i=0;i<n; i++)
        {
            cin>>position[i];
        }
        sort(position,position+n);
        int lo=0,hi=1e9, mid;
        while(hi-lo>1)
        {
          int  mid=(lo+hi)/2;
            if (canplacecow(mid))
            {
                lo=mid;
            }
            else
                hi=mid-1;
        }
        if(canplacecow(hi)) cout<<hi<<endl;
        else cout<<lo<<endl;
    }
}
