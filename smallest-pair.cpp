#include <iostream>
using namespace std;
int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
    
            int factorial = 1;
        
            for (int i = 1; i <=n; i++)
            {
                factorial *= i;
            }
        
        cout << factorial<<endl;
    }
    return 0;
}