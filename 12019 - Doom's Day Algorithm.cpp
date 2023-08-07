#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, t,test = 0;
    int day[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>t;
    string date[7]= { "Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    while(t--)
    {
        int m,d; cin>>m>>d;
        for(i=1; i<m; i++)
        {
            d+=day[i];
        }cout<<date[(d+5)%7]<<endl;
    }}
