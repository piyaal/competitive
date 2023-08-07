
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
vector<vector<int>> subsets(vector<int>& nums)
{
    int n=nums.size()  ;
    int subset_ct=(1<<n);
    vector<vector<int>> subsets;
    for(int mask=0; mask<subset_ct; ++mask)
    {
        vector<int>subset;
        for(int i=0; i<n; i++)
        {
            if ((mask & (1<<i))!=0)  //cheking weather it is set or unset,checking it is set mean 1;
            {
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset) ;
    }
    return subsets;
}
int main()
{

    ll n,m,k,t,i,a,b,c;
        cin>>n;
        vector<int>v(n);
        for(i=0; i<n; ++i )
        {
            cin>>v[i];
        }
        auto  all_subsets= subsets(v);
        for (auto subset:all_subsets)
        {
            for(int ele: subset) {
               cout<<ele<<" ";
            } cout<<endl;
        }
    }
