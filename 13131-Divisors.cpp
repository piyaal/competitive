
#include <bits/stdc++.h>
using namespace std; int main()
    {
        int k,p,i,j;
        long long int a,b,s;
        cin>>k;
        for(j=1;j<=k;j++){
            s=0;
            cin>>a>>b;
            for(i=1;i*i<=a;i++){
                if(i*i==a & i%b!=0)
                    s+=i;
                else if(a%i==0){
                    if(i%b!=0)
                        s+=i;
                    if((a/i)%b!=0)
                        s+=(a/i);
                }
            }
            cout<<s<<endl;
        }
        return 0;
    }
