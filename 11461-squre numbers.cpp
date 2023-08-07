#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,i,cc,c;
    while(cin >> a >> b && a!=0 && b!=0){
        c= 0;
        for(i = a; i <= b; i++){
            cc= sqrt(i);
            if(i == pow(cc,2))c++;
        }
        cout << c << endl;
    }
    return 0;
}
