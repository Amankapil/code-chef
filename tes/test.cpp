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
        cin >> n;
        int a[n];
        int count = 0;
        int count1 = 0;
        int ans;
        for (int i = 0; i < n; i++)

        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        if (count > count1)
        {

            ans = count1;
        }
        else
        {
            ans = count;
        }
        if (count == 0 || count1 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}