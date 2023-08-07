#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,a,b,n,k,j,t;
    cin >>t;
    for(i = 1; i<= t; i++){
        b= 0,n;
        cin >> n;
        for(j = 0; j < n; j++){
           cin >> a;
           if(a>= 0)b+=a;
        }
       cout  << "Case " <<i << ": " <<b <<endl;;
    }
    return 0;
}
