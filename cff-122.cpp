#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

void slv(){
    ll n,t,i,a,b,c;
    cin>>n;
    string ss;
    cin>>ss;
    map<pair<char, char>, int> mx;
    pair<char, char> pr= {ss[0], ss[1]};
    mx[pr]++;
    for (i=2; i<n; i++)
    {
        pair<char, char> pr2= {ss[i-1], ss[i]};
        if (mx[pr2]!=0)
        {
            if(pr2==pr && mx[pr2]>1 ||(pr2!=pr))
            {
                cout<<"YES"<<endl; return;
            }
        }
        pr=pr2;
        mx[pr2]++;}
    cout<<"NO"<<endl; }

int main()
{
    ll t,i,a,b,c;
    cin>>t;
    while(t--)
            slv(); return 0; }

