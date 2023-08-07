
#include <iostream>
using namespace std;
main()
{
    int n,t,i;
    string s;
    cin>>n>>t>>s;
    while(t--){
        for(i=0; i<s.size()-1; i++)
            if(s[i]=='B'&&s[i+1]=='G')
            swap(s[i],s[i+1]),i++; }
    cout<<s;
}
