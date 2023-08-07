#include<bits/stdc++.h>
using namespace std;

int main(){ set<char>s; int n;
    string s1; cin>>n>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
     for(int i=0;i<s1.size();i++) s.insert(s1[i]);
    cout << (s.size()==26 ? "YES\n" : "NO\n") ;
    return 0;
}
