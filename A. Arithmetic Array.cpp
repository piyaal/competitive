#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>=n)
        {
            cout<<sum-n<<endl;
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}
