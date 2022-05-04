#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> s;
        n = s.size();
        int working = 120;
        int present = working - n;
        int attend = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                attend++;
            }
        }
        
        present = present + attend;
        if (present / 120 * 100 >= 90)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}