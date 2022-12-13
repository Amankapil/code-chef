#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ne;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'H' || s[i] == 'T')
            {
                ne += s[i];
            }
        }

        if (ne.length() % 2 != 0)
        {
            ans = false;
        }
        else
        {
            for (int i = 0; i < ne.length(); i++)
            {
                if (i % 2 == 0)
                {
                    if (ne[i] = 'T')
                    {
                        ans = false;
                    }
                    else
                    {

                        ans = true;
                    }
                }
                else
                {
                    if (ne[i] == 'H')
                    {
                        ans = false;
                    }
                    else
                    {
                        ans = true;
                    }
                }
            }
        }
        if (ans)
        {
            cout << "valid" << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
}