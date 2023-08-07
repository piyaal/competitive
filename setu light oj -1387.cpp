#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,j,i,k,n,c,sum;
    cin >> t;
    for(i = 1; i<= t; i++){
        sum=0;
        cin >>n;
        cout << "Case " <<i << ":\n";
        for(j = 0; j < n; j++){
            string str;
            cin >> str;
            if(str == "report"){
               cout << sum << "\n";
               continue;
            }
            cin >> k;
            if(str == "donate")sum+=k;
        }
    }
    return 0;
}
