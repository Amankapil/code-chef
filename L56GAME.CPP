#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int p = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int sum = a[i] + a[i + 1];
            if (sum % 2 == 0)
            {

                p == a[i] + a[i + 1];
                // delete a[i] + a[i + 1];
                n--;
            }
            // n--;
        }
        cout << n << endl;
    }

    return 0;
}
