#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >>b;
        int s = a+b;
        sum = s%10;
        if (s=0)
        {
            sum+=6;
        }
        else if (s=1)
        {
            sum+=2;
        }
        else if (s=2)
        {
            sum+=5;
        }
        else if (s=3)
        {
            sum+=5;
        }
        else if (s=4)
        {
            sum+=4;
        }
        else if (s=5)
        {
            sum+=5;
        }
        else if (s=6)
        {
            sum+=6;
        }
        else if (s=7)
        {
            sum+=3;
        }
        else if (s=8)
        {
            sum+=7;
        }
        else if (s=9)
        {
            sum+=6;
        }
        cout<<sum<<endl;
        
        

    }
    
}