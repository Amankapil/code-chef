#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6] = {100, 50, 10, 5, 2, 1};
        int n;
        cin >> n;
        int cn = 0;
        for (int i = 0; i < 6; i++)
        {
            cn += n / arr[i];
            n -= (arr[i] * (n / arr[i]));
        }
        cout << cn;
    }
}