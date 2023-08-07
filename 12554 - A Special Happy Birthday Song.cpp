#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,d,i,j,n,m,l,t,cc,ma,mi,flag,c=0;
    string b;

    string s[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    cin >> n;

    string x[n];

    for(int i=0;i<n;i++) cin >> x[i];
    if(n>16){
        c=(n/16)*16;
        if(n%16!=0)
            c+=16;
    }
    else
        c=16;

    string o[c];

    for(int i=0,j=0,k=0;i<c;i++){
        o[i]=x[j];
        o[i]=o[i]+": "+s[k];
        if(j==n-1)
            j=-1;
        j++;

        if(k==15)
            k=-1;
        k++;
        }

    for(int i=0;i<c;i++)
        cout << o[i] << endl;


    return 0;
}
