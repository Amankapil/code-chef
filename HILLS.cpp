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
        int n, u, d;
        cin >> n >> u >> d;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i + 1] >= a[i] && a[i + 1] - a[1] <= u)
            {
                count = i;
            }
            else if (a[i + 1] <= a[i] && a[i] - a[i + 1] >= d)
            {
                count = i;
            }
        }
        cout << count << endl;
    }
}