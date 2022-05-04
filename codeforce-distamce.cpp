#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1 = 0, a2 = 0, b1, b2, c1, c2, dista1, distc1;
        cin >> b1 >> b2;
        dista1 = abs((a1 - b1) + (a2 - b2));
        distc1 = dista1 / 2;
        cout << distc1 << endl;
        c1 = b1 / 2;
        c2 = b2 / 2;
        if ((c1 + c2) % 2)
        {
            cout << "-1 -1" << endl;
        }
        cout << c1 << " " << c2;
    }
}