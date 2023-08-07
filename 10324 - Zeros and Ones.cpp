#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,i,j,n,m,l,t,cc,ma,mi,flag,c=0;
    string input;
    while(cin>>input)
    {
        cin>>n;
        c+=1;
        printf("Case %ld:\n",c);
        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            ma=max(a,b);
            mi=min(a,b);
            flag=0;
            for(j=mi+1;j<=ma;j++)
            {
                if(input[j]==input[j-1])
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
