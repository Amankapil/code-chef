#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, rem;
    int store = 0, day = 0;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        float min = 0;
        int count = 0;
        int negetive = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // min = n / d;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 80 || a[i] <= 9)
            {
                count++;
            }
            else
            {
                negetive++;
            }
        }
        if (d == 1)
        {
            cout << n << endl;
        }
        else
        {

            if (count % d == 0 && negetive % d == 0)
            {
                min = min + (count / d) + (negetive / d);
            }
            else if (count % d != 0 && negetive % d == 0)
            {
                min = min + (count / d) + 1 + (negetive / d);
            }
            else if (count % d == 0 && negetive % d != 0)
            {
                min = min + (count / d) + (negetive / d) + 1;
            }
            else if (count % d != 0 && negetive % d != 0)
            {
                min = min + (count / d) + 1 + (negetive / d) + 1;
            }

            cout << min << endl;
        }
    }
}