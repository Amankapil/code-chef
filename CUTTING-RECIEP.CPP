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
        int count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] % arr[0] == 0)
            {
                count+=1;
                // count = arr[i] % arr[0];
                // cout << arr[count] << endl;
            }
            // else
            // {
            //     cout << i << endl;
            // }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[count]<<" ";
        }
        
    }

    return 0;
}