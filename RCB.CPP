#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        int x, y, z;
        cin >> x >> y >> z;
        int remainnigm = z * 2;
        if (y - x > z * 2)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
    }
}