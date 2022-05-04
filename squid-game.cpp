#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        int sum = 0;
        int min = 10001;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            if (a < min)

                min = a;
            sum = sum + a;
        }
        sum = sum - min;
        cout << sum << endl;
    }
}