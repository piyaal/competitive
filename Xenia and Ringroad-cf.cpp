 #include<bits/stdc++.h>
using namespace std;
int main()
{    long long int a,b,c,n,m,t,i,j,k;
    cin>>n>>m;

    k= 1;
    long long int ans = 0;
    for(i=0; i<m; i++)
    {
        int a;
        cin>>a;

        if(a>=k)
            ans+= a-k;
        else
            ans +=n - (k -a);
        k= a;
    }

    cout << ans << endl;
}
