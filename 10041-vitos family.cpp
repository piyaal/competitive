#include<bits/stdc++.h>
 using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    int d[500]={0};
    for(int i=0;i<testcase;i++)
    {
        int r;
        cin>>r;
        int s[500];
        int best(0);
        for(int j=0;j<r;j++)
        {    cin>>s[j];    }
        sort(s,s+r);
        best=s[(int)r/2];
        for(int j=0;j<r;j++)
        {    d[i]+=abs(s[j]-best);    }
    }
    for (int i=0;i<testcase;i++)
    {    cout<<d[i]<<endl;    }
}
