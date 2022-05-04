#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        
            cin>>a[i];
        
        int count;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int pro = 1;
            for (int j = i; j < n; i++)
            {
                sum +=a[j];
                pro *= a[j];
                if (sum==pro)
                {
                    count++;
                }
                
            }
            cout<<count<<endl;
            
        }
        
        
    }
}