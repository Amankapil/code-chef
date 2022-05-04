#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int totalcoin = x * y;
        int begs = totalcoin / 100;
        cout << begs << endl;
    }

    return 0;
}