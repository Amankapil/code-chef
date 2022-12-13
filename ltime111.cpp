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
        int a[n];
        int temp = 0;
        // int temp[];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
            sort(a, a+n);

        for (int i = 0; i < n + 1; i++)
        {
            int j = i;
            while (a[i] == a[j] && i < n)
            {
                i++;
            }
            temp = max(i - j, temp);
        }
        if(temp<=(n+1)/2){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

        cout << temp << endl;
    }
}