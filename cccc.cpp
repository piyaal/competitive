#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;


static void C(int t) {

       int b = new long[n];

        for (int i = 0; i < n; ++i) {

            b[i] = a[i];

        }

        sort(b, 0, n - 1);

        long high = b[n - 1];
        long second_high = b[n - 2];

        long final_ans[] = new long[n];

        int index = 0;

        for (long i : a) {

            if (i != high) {

                final_ans[index++] = (i - high);

            } else {

                final_ans[index++] = i - second_high;

            }

        }

        StringBuilder sb = new StringBuilder();

        for (long i : final_ans) {

            sb.append(i).append(" ");

        }

        ans.append(sb.toString().trim());

        if (t != testCases) {

            ans.append("\n");

        }

    }

    static void B(int t) {

        int max = 0;

        for (char i : x) {

            if ((i - 'a') >= max) {

                max = (i - 'a');

            }

        }

        ++max;

        ans.append(max);

        if (t != testCases) {

            ans.append("\n");

        }

    }

    static void A(int t) {

        int max = 0, min = c[0];

        for (int i : c) {

            max = Math.max(i, max);
            min = Math.min(i, min);

        }

        for (int i = 0; i < 3; ++i) {

            if (c[i] != max) {

                if (c[i] != min) {

                    ans.append(c[i]);
                    break;

                }

            }

            if (c[i] != min) {

                if (c[i] != max) {

                    ans.append(c[i]);
                    break;

                }

            }

        }

        if (t != testCases) {

            ans.append("\n");

        }

    }
