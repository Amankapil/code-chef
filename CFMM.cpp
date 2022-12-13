#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string count;
        string code;

        for (int i = 0; i < n; i++)
        {
            cin >> s;
            count += s;
        }
        // cout << count << endl;
        for (int i = 0; i < count.length(); i++)
        {
            if (count[i] == 'c' || count[i] == 'o' || count[i] == 'd' || count[i] == 'e' || count[i] == 'h' || count[i] == 'f')
            {
                code += count[i];
            }
        }
        for (int i = 0; i < code.length(); i++)
        {
            
        }
        
        cout << code << endl;
    }
}