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
        int n, m, k;
        cin >> n >> m >> k;
        int x = ((k - (n * n)) / (m - 1));
        cout << x << endl;
    }
}