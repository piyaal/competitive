#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,n,m,t,j,k;
    int bk, db,vl;
    int deb,cre,mny;
    int flag;
    while(cin>>bk>>db && bk!=0 && db!=0)
    {
        int bnk[100];
        for(i=0; i<bk; i++){
            cin>>bnk[i];}
        for(i=0; i<bk; i++)
        {
            cin>>deb>>cre>>mny;
            bnk[cre-1] += mny;
            bnk[deb-1] -= mny;
        }
       flag=0;
        for(i=1; i<=db; i++)
            if(bnk[i] < 0)
            {
                flag = 1;
                break;
            }

        if(flag==1)
            cout<<"N"<<endl;
        else
            cout<<"S"<<endl;
    }
    return 0;
}
