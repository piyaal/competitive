#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,r,i,j,n,m,l,t,cc;
    char c;scanf("%d%c",&t,&c);
  a=1;
    for(j= 0; j<t; j++)
    {
        char s[200];
        gets(s);

        int len = strlen(s);
        cc= 0;
        for(i = 0; i < len; i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
            {
                cc+=1;
            }
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
            {
                cc+=2;
            }
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
            {
                cc+=3;
            }
            else if(s[i]=='s'||s[i]=='z')
            {
                cc+=4;
            }
        }
        cout << "Case #" <<a<< ": " <<cc << endl;
       a+=1;
    }
    return 0;
}

