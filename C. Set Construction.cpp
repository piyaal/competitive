
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char ar[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>ar[i][j];
        } vector<vector<int>> v;
        for(int i=0; i<n; i++)
            v.push_back({i+1});
        int cnt[n];
        for(int i=0; i<n; i++)
        cnt[i]=0;
        vector<vector<int>> vad;
        for(int i=0; i<n; i++)
        {
            vad.push_back({});
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]=='1')
                {
                    vad[i].push_back(j);
                    cnt[j]++;
                }
            }
        }
        queue<int> q;
        for(int i=0; i<n; i++)
        {
            if(cnt[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int xx=q.front();
            q.pop();
            for(int i=0; i<vad[xx].size(); i++)
            {
                int cc=vad[xx][i];
                cnt[cc]--;
                v[cc].push_back(xx+1);
                if(cnt[cc]==0) q.push(cc);
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i].size()<<" ";
            sort(v[i].begin(),v[i].end());
            for(int j=0; j<v[i].size(); j++) cout<<v[i][j]<<" ";
            cout<<endl;
        }

    }
}
