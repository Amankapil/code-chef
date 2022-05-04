#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x;
        cin >> n >> x >> p;
        int tot = x * 3;
        int minus = n - x;
        int finalmarks = tot - minus;
        if (finalmarks >= p)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "fail";
        }
    }

    return 0;
}