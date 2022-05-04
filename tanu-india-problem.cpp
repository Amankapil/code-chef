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
        string s;
        cin >> s;
        bool certain = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                continue;
            }
            else
            {
                certain = true;
                if (s[i] == 'I')
                {
                    cout << "INDIAN" << endl;
                    break;
                }
                else if (s[i] == 'Y')
                {
                    cout << "NOT INDIAN" << endl;
                    break;
                }
            }
        }
        if (!certain)
        {
            cout<<"NOT SURE"<<endl;
        }
        
    }
    return 0;
}