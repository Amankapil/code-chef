
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
    
        int d1, t1, m1, d2, t2, m2;
        cin >> d1 >> t1 >> m1;
        cin >> d2 >> t2 >> m2;
        if (d1 + t1 + m1 > d2 + t2 + m2)
        {
            cout << "Dragon" << endl;
        }
        // else
        // {
        //     cout << "Sloth" << endl;
        // }

          else if (d1 + t1 + m1 == d2 + t2  + m2)
        {
            if (d1 > d2)
            {
                cout << "Dragon" << endl;
            }
            else
            {
                cout << "Sloth" << endl;
            }
        }
        else if (d1 + t1 + m1 == d2 + t2  + m2 && d1 == d2)
        {
            if (t1 > t2)
            {
                cout << "Dragon" << endl;
            }
            else
            {
                cout << "Sloth" << endl;
            }
        }
        else if (d1 == d1 && t1 == t2 && m1 == m2)
                cout
            << "TIE" << endl;
    }
    return 0;
}
