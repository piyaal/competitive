
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long int
int N=1e6+10;
void solve(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    set<int> ans[n];
    for(int i=0;i<n;i++){
        ans[i].insert(i+1);
        for(int j=0;j<n;j++){
            if(s[i][j]=='1'){
                ans[j].insert(i+1);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i].size()<<' ';
        for(auto it:ans[i]){
            cout<<it<<' ';
        }
        cout<<'\n';
    }

}


int main() {
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
