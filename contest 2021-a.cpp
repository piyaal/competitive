#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,m,n,i,j,c,x,y;

    map<int,int> map;
    while(cin>>n>>m && n!=0 &&m!=0){
            if(n+m>0)
               x=n+m;

    for(i=0;i<n;i++){
        cin>>i;
        map[i]++;
    }

    for(i=0;i<m;i++)
        {
             cin>>i;
        map[i]++;
        }
}

c=map.size();
for(i=0;i<=c;i++)
    cout<<map<i>;

cout<<x-c<<endl;
        }
