#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // incomplete
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[n];
        int count = 1;
        int min = 100;
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - a[i - 1] <= 2)
            {
                count++;
            }
            else
            {
                if (min > count)
                {
                    min = count;
                }
                if (max > count)
                {
                    max = count;
                }
                count = 1;
            }
        }
        if (min > count)
        {
            min = count;
        }
        if (max > count)
        {
            max = count;
        }
        cout << min << " " << max << endl;
    }
}