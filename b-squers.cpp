#include<bits/stdc++.h>
using namespace std; int main(){
int n,k,c;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(k == 0){
            cout << v[n - 1] + 1 << " " << v[n - 1] + 1 << endl;
        }else if(k > n){
            cout << -1 << endl;
        }else if(k == n){
            cout << 0 << " " << 0 << endl;
        }else{
            int c= n - k;
            cout << v[c] << " " << v[c] << endl;
        }
    return 0;
}
