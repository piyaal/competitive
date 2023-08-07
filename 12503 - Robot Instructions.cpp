#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,d,i,j,n,m,l,t,cc,ma,mi,flag,c=0;
    string s,b;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n+1];

        arr[0]=0;

        int c=0,y;

        for(j=1; j<=n; j++)
        {
            cin >> s;

            if(s.compare("LEFT")==0)
            {
                arr[j]=-1;
                c+=arr[j];
            }
            else if(s.compare("RIGHT")==0)
            {
                arr[j]=1;
                c+=arr[j];
            }
            else if(s.compare("SAME")==0)
            {
                cin >> b >> y;
                arr[j]=arr[y];
                c+=arr[j];
            }

        }
        cout << c << endl;

    }
}
