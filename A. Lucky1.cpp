#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int a=0,b=0;
        cin>>k;
       int array[6];
      for (int i = 1; i <=6; i++) {
    array[i] = k% 10;
    if(i<=3)
    {
       a+=array[i];
    }
    if(i>3)
    {
       b+=array[i];

    }
    k /= 10;
}
if(a==b)
    cout<<"YES"<<endl;
else
    cout<<"no"<<endl;
}
}

/*void st() {
    cin >> t;
    while (t--) {
        cin >> ss;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < 6; i++) {
            if (i < 3)
                cnt1 += ss[i] - '0';
            else
                cnt2 += ss[i] - '0';
        }
        if (cnt1 == cnt2)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

|*/
