#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,k,n,q,i,j,p,t;
    cin>>t;
    int arr[5];
        for(i=1; i<=t; i++)
        {
            int no[3];
            for(j=0; j<3; j++)
                cin>>no[j];
            for(j=0; j<3; j++)
            {
                for(k=j+1; k<3; k++)
                {
                    if(no[j]>no[k])
                    {
                        int temp=no[j];
                        no[j]=no[k];
                        no[k]=temp;
                    }

                }

            }

            cout<<"Case "<<i<<": "<<no[1]<<endl;

        }

        return 0;

    }

