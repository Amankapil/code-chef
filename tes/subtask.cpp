#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, rem;
    int count = 0, day = 0;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                count++;
            }
        }
        // for (int i = 0; i < m; i++)
        // {
        //     if (a[i] == 1)
        //     {
        //         day++;
        //     }
        // }
        if (count == n)
        {
            cout << "100" << endl;
        }
        else if (day == m)
        {
            cout << k << endl;
        }
        // cout<<"hi"<<endl;
    }
}