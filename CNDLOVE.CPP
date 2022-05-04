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
        int a[n];
        int sam = 0, simy = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sam += a[i];
        }
        if (sam%2==0)
        {
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        
    }
}