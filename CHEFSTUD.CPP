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
        char left = '>';
        char right = '<';
        char study = '*';
        int count = 0;
        for (int i = 0; i < n; i++) // s[i]==right && s[i+1] ==left
        {
            if (s[i] == left && s[i + 1] == right)
            {
                s[i] = right;
                s[i + 1] = left;
            }
            else if (s[i] == right && s[i + 1] == left)
            {
                s[i] = left;
                s[i + 1] = right;
            }
        }
            for (int i = 0; i < n; i += 2)
            {

                if (s[i] == right && s[i + 1] == left)
                {
                    count++;
                }
            }
            cout << count << endl;
        
    }

    return 0;
}
