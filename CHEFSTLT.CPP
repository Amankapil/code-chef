#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int max = 0;
        int min = 0;
        int n = s1.size();
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '?' && s2[i] == '?')
            {
                max += 1;
            }
            else if (s1[i] != s2[i])
            {
                min += 1;
                max += 1;
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}