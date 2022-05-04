#include <iostream>
using namespace std;

// int pelindrome(int n)
// {
//     int reverse = 0;
//     int lastdigit = n % 10;
//     reverse = reverse * 10 + lastdigit;
//     n /= 10;
//     if (reverse = n)
//     {
//         cout << "wins";
//     }
//     else
//     {
//         cout << "losses";
//     }
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int co = n;
        int reverse = 0;
        while (n != 0)
        {
            int lastdigit = n % 10;
            reverse = reverse * 10 + lastdigit;
            n /= 10;
        }
        if (reverse == co)
        {
            cout << "wins";
        }
        else
        {
            cout << "loses";
        }
    }

    return 0;
}