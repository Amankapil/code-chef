#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool ans = true;
        for (int i = 0; i < n; i++)

        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if ((a[i + 1] - a[i]) >= 1)
            {
                ans = false;
            }
            else
            {
                ans = true;
            }
        }
        if (ans == false)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}