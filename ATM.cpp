#include <iostream>
using namespace std;
int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)

        {
            if (a[i] <= k)
            {
                k -= a[i];
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}