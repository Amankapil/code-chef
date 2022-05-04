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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int supply;
            supply = a[i];
            int demand;
            demand = k;
            store += supply;

            if (demand > store)
            {
                day = i;
                break;
            }
            store -= demand;
        }
    }
    if (day == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << day << endl;
    }
    return 0;
}
