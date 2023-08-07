#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n; int arr[n];
    int ce= 0, cd = 0, last_odd, last_even;
    for (int i=1; i <=n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            ce++;
            last_even = i;
        }
        else
        {
            cd++;
            last_odd = i;
        }
    }

    if (cd == 1){
        cout << last_odd;
        return 0;
    }
    if (ce == 1){
        cout << last_even;
        return 0;
    }
}
