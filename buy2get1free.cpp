#include <iostream>
using namespace std;
int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int q = x / 3;
        int r = x % 3;
        res = (2 * q + r) * y;
        cout << res << endl;
    }
}