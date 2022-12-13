#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            for (int j = i; j < n; j++)
            {
                if (temp == a[j])
                {
                    count += 1;
                }
            }
        }
        cout << count;
        // for (int i = 0; i < n; i++)
        // {
        //     int sum = 0;

        //     if (count >= k && a[i] != i)
        //     {
        //         sum += 1;
        //     }
        //     cout << sum << endl;
        // }
    }
    return 0;
}