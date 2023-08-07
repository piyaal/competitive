#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int min_value = 110, max_value = 0;
    int min = 0, max = 0;
    for(int i=1; i<=n; i++){
        int l; cin>>l;
        if(l>max_value){
            max = i;
            max_value= l;
        }
        if(l<=min_value){
            min = i;
            min_value = l;
        }
    }
    if(max>min) cout<<((max-1)+(n-min)-1);
    else cout<<(max-1)+(n-min);
    return 0;
}
