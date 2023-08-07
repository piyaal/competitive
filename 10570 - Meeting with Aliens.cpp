#include<bits/stdC++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(!n)
        {
            break;}
            int i = 0;
            unordered_map<int, int> umap;
            vector <int> arr(n);
            for(int i = 0; i<n; i++)
            {
                cin >> arr[i];
                umap[arr[i]] = i;
                int ans = INT_MAX;
                int cnt;
                unordered_map <int,int> umap2 = umap;
                for(int i=0; i<n; i++)
                {
                    umap = umap2;
                    vector <int> arr2 = arr;
                    cnt = 0;
                    for(int j = 0; j<n; j++)
                    {
                        if(arr2[(i+j)%n] !=j+1)
                        {
                            int x = arr2[(i+j)%n];
                            int pos = umap[j+1];
                            swap(arr2[(i+j)%n], arr2[pos]);
                            umap[x] = pos;
                            umap[j+1] = 1;
                            cnt++;} }
                            ans = min (ans, cnt);}
                            for(int i=0; i<n; i++)
                        {
                            umap = umap2;
                            vector <int> arr2 =arr;
                            cnt = 0;
                            for(int j = 0; j<n; j++)
                                {
                                    if(arr2[(i+j)%n] !=n-j)
                                    {
                                        int x = arr2[(i+j)%n];
                                        int pos = umap[n-j];
                                        swap(arr2[(i+j)%n], arr2[pos]);
                                        umap[x] = pos;
                                        umap[n-j] = n-j-1;
                                        cnt++;}}
                                        ans = min(ans, cnt);}
                                        cout << ans << endl; }}}
