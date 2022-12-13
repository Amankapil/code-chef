#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int count = 0;
        n = s.length();
        cin >> s;
        bool is = true;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count += 1;
            }
            if (count >= 4)
            {
                is = false;
                break;
            }
        }
        if (is)
        {
            cout << "yes" << endl;
        }
        else
        {

            cout << "no" << endl;
        }
    }

    return 0;
}