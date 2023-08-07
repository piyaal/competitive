
#include <iostream>
using namespace std;

// function that return the largest alphabet.
char largest_alphabet(char a[], int n)
{
    // initializing max alphabet to 'a'
    char max = 'A';

    // find largest alphabet
    for (int i=0; i<n; i++)
        if (a[i] > max)
            max = a[i];

    // returning largest element
    return max;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n+1];cin>>s;

        cout << int(largest_alphabet(s,n))-96<<endl;
    }
    return 0;
}
