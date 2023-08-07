#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll arr[n+1],brr[n+1],crr[n+1];
        vector<pair<int, int>> A(n);
        for (int i = 0; i < n; ++i)
            cin >> A[i].second;
        for (int i = 0; i < n; ++i)
        cin >> A[i].first;
        sort(A.begin(), A.end());
        int j = 0, s = 0;
        while (k > 0)
        {
            s += k;
            while (j < n && A[j].second <= s) ++j;
            if (j == n) break;
            k -= A[j].first;
        }
        cout << (k > 0 ? "YES" : "NO") << endl;
        /*sort(brr+1,brr+n+1);c=2;k=k-brr[1]; l:
        for(i=1; i<=n; i++)
        {
            arr[i]=arr[i]-k;
        }  k=k-brr[c++]; a=*max_element(arr+1,arr+n+1); if(a>0 && k>0) goto l;
        if(a<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; */
    }
}
