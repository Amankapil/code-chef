#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        // int a[n];
        bool ans = true;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == '1')
            {
                count1++;
            }
            else if (n[i] == '0')
            {
                count0++;
            }
        }
        if (count0 == 1 || count1 == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}