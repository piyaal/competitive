char A;
    int i, j, t, test;
    int val, len ;
    string s;
    scanf("%d", &test);
    getchar();
    for(t=1; t<=test; t++)
    {
        cin >> s;
        len=s.length();
        printf("Case %d: ", t);
        for(i=0; i<len; i++)
        {
            val=0;
            if(s[i]>='A' && s[i]<='Z')
            {
                A=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                val=val+s[i]-'0';
                i++;
                while(s[i]>='0' && s[i]<='9')
                {
                   val=val*10;
                   val=val+(s[i]-'0');
                   i++;
                }
                i--;
                for(j=0; j<val; j++)
                {
                    printf("%c", A);
                }
            }
        }
        printf("\n");
    }
}
