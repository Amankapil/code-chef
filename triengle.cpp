#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin>>a;
        a = a - 2;
        a = a / 2;
        b = a * (a + 1) / 2;
        cout << b << "\n";
    }
}