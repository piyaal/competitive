#include<bits/stdc++.h>
using namespace std; int h,w;char g[105][105];
int main()
{
    while (cin >> h >> w)
    {
        cin.ignore();
        string line;
        int cnt = 0;
        int area = 0;
        for(int i=0; i<h; i++)
        {
            getline(cin, line);
            for(int j=0; j<w; j++)
            {
                g[i][j] = line[j]; } }
                for(int i=0; i<h; i++)
                {
                    bool start = false;
                    for(int j=0; j<w; j++)
                    {
                        if (g[i][j] == '\\' || g[i][j] == '/')
                        {
                            if (start == false) start = true;
                            else start = false;
                            cnt++;
                        }
                        else if (g[i][j] == '.')
                        {
                            if (start == true) area++;
                        }
                    }
                }
                area = area + cnt / 2;
                cout << area << endl;
            }
        }
