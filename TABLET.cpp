#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n + 1];
        long w, h, p;
        int max =-1;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> w >> h >> p;
        }
        for (int i = 1; i < n + 1; i++)
        {
            int ar = w*h;
            if (p<=b)
            {
                if (ar>max)
                {
                    max = ar;
                }
                
            }
                
            if (max==-1)
            {
                cout<< "no teblet"<<endl;
            }
            else{
                cout<<ar<<endl;
            }
        }
    }
}