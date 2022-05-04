#include <iostream>
using namespace std;
int main()
{
    int t, res = 0;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y;
        int  arr[] = {};
        for (int i = x; i <= y; i++)
        {
            if (arr[i]%10 == 2 || arr[i]%10 == 3 || arr[i]%10 == 9)
            {
                res += 1;
            }

        }
            cout << res << endl;
    }
    return 0;
}
