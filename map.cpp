
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
 struct comp {
    template <typename T>

    // Comparator function
    bool operator()(const T& l, const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        return l.first < r.first;
    }
};

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string,ll>& M)
{

    // Declare set of pairs and insert
    // pairs according to the comparator
    // function comp()
    set<pair<string,ll>, comp> S(M.begin(), M.end());

    // Print the sorted value
    for (auto& it : S) {
        cout << it.first << ' ';
    } cout<<endl;
}
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
     map<string,ll>mp; ll mx=0;
     arr[n+1]; i=0;
    while(t--)
    {
     string s;
        cin>>s>>arr[i];
        c=1;
         if(n>mx) mx=n;
      mp.insert({s,n});
      i++;
    }
      //sort(mp);

      for(auto it =mp.cbegin(); it !=mp.cend(); ++it ) {
    //checked = it->second;
    if(it ->second >mx)
    {
      string  maax = it->first;
    }
     }

      /* vector<pair<ll,ll>>vec;
       for(i=1;i<=n;i++)
       {
        vec.push_back({mp[i],i});
       }

        sort(vec.begin(),vec.end());
        for(i=1;i<=n;i++)
       {
        cout<<vec[i].first;
       }
   /* vector<pair<int, int> > v;
  copy(mp.begin(),
       mp.end(),
       back_inserter<vector<pair<int, int> > >(v));

  for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i].first << " , " << v[i].second << "\n";
  }
        /*for(map<ll,ll>::const_iterator it = mp.begin();
                it != mp.end(); ++it)
        {
            std::cout << it->first << " " << it->second << "\n";
        }
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;*/
    }
