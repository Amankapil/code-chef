#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int d, c, a1, a2, a3, b1, b2, b3;
        int day1 = 0;
        int day2 = 0;
        int withCupan = 0;
        int without = 0;
        cin >> d >> c;
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        day1 = a1 + a2 + a3;
        day2 = b1 + b2 + b3;

        if (day1 <= 150 || day2 <= 150)
        {
            withCupan = day1 + day2 + c + d;
        }
        else
        {
            withCupan = day1 + day2 + c;
        }
        without = day1 + day2 + 2 * d;
        if (withCupan >= without)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}