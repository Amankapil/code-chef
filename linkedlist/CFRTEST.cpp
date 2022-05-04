#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */

            if (a[i] != a[i + 1])
            {
                cout << n << endl;
            }
            else
            {
                count++;
            }
        }
    }

    return 0;
}
