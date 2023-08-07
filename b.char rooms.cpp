#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, l, r,i,t,j,c,ok;
    pair<int, int> x[55],z[55];
    cin >> p >> q >> l >> r;
    for(i = 0; i < p; i++)
        cin >> z[i].first >> z[i].second;
    for(i = 0; i < q; i++)
     cin >> x[i].first >> x[i].second;
    c= 0;
    for(t = l; t <= r; t++)
    {
        ok = 0;
        for(i = 0; i < q; i++)
        {
            for(j = 0; j < p; j++)
            {
                if((x[i].first + t >= z[j].first && x[i].first + t <= z[j].second)
                        || (x[i].second + t >= z[j].first && x[i].second + t <= z[j].second)
                        || (z[j].first >= x[i].first + t && z[j].first <= x[i].second + t)
                        || (z[j].second >= x[i].first + t && z[j].first <= x[i].second + t)) ok = 1;
            }
        }
        c+= ok;
    }
    cout <<c<< endl;
}
