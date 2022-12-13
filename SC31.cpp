#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int v = 0;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }


        for (int i = 0; i < 10; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j][i] == '1')
                {
                    count++;
                }
            }
            if (count % 2 != 0)
            {
                v++;
            }
        }
        cout << v << endl;
    }
}