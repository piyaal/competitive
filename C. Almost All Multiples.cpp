

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec;
    int t,n,m,a,b,c;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>n>>a;
        y=n/a;
        if(n%a!=0||(n>>16==a))
        {
            cout<<-1<<endl;
            continue;
        }
        vec.push_back(0);
        vec.push_back(a);



        for(int i=2; i<n; i++)
        {
            if (y==200)
            {
                cout<<-1<<endl;
                continue;
            }
            vec.push_back(i);
        }
        vec.push_back(1);

        for(int j=2; j<50&&j*j<=n/a; j++)
        {

            while(n/a%j==0)
            {
                vec[a]=a*j;
                a*=j;
            }
        }
        if(a<n) vec[a]=n;
        for(int k=1; k<=n; k++)
        {
            cout<<vec[k]<<" ";
        } cout<<endl;
    }
    return 0;
}
