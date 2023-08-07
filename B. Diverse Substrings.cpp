#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
string s;
cin>>s;
long long  answr=0;
for(int i=0;i<n;i++)
{
    vector<int>cmn(10);
    int d=0;
    for(int j=i;j<min(i+228,n);j++)
    {
        auto ct=s[j]-'0';
        if(cmn[ct]==0)
            d++;
        cmn[ct]++;
        if(*max_element(cmn.begin(),cmn.end())<=d)
            answr++;
    }
}
cout<<answr<<endl;
}
    return 0;
}
