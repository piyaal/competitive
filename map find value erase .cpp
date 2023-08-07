
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<" ";
    }
}
int main()
{

    ll n,k,t,i,a,b,c;
    map<int,string> m;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>s;
        m[a]=s; //O(log n) 7 map er key duplicate hobe na,duplicate value thakle key er update value print hobe,m[3]="abc",m[3]="def" output asbe 3 def;
    }
    print(m);
    //
    //key find
    int x;
    cin>>x;
    auto it=m.find(x);
    if(it==m.end()) cout<<"no value";
    else
    {
        cout<<(*it).first<<" "<<(*it).second;
    }

    //erase

    m.erase(x);
    //iterator
    auto itt=m.find(x);
    m.erase(x);
    print(m);




    /*  map<int,string> :: iterator it; // iterator diye;
     for(it=m.begin(); it!=m.end(); it++)
     {
         cout<<(*it).first<<" "<<(*it).second;
     }
    cout<<endl;
    // auto dia
    for(auto & pr:m)
    {
     cout<<pr.first<<" "<<pr.second<<" ";//O(log n);
    }  */
    //sort(arr+1,arr+n+1);
    //if cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}

