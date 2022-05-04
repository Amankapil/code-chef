#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int menu = 0;
        for (int i = 11; i >= 0; i--)
        {
            int cntpow = pow(2,i);
            while (n >= cntpow)
            {
                n = n - cntpow;
                menu ++;
            }
        }
        cout << menu << endl;
    }
    return 0;
}