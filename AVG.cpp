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
        int n, k;
        float v;
        cin >> n >> k >> v;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            count += a[i];
        }
        int c = count / n;
        // cout<<count;
        if (c == v && c%2==0)
        {
            cout << v << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}