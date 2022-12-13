#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        if (n <= 50)
        {
            cout << 100 << endl;
        }
        else if (n > 50 && n <= 100)
        {
            cout << 50 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}