#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 3; ++i) scanf("%*s");
    char str[50];
    scanf("%s", str);
    for (int i = 0; i < 4 * n; i += 4)
    {
        if (str[i] == '*')
            putchar('2');
        else if (str[i + 1] == '*')
            putchar('1');
        else
            putchar('3');
    }
    putchar('\n');

    return 0;
}
