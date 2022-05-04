#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = 0, r;
        r = s.length() - 1;
        while (r > l)
        {
            if (s[l++] != s[r--])
            {
                cout << "No" << endl;
            }
        }
            cout << "Yes" << endl;
    }
}