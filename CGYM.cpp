#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x + y;
        if (sum <= z)
        {
            cout << "2" << endl;
        }
        else if (x<=z && sum >=z)
        {
            cout <<"1"<< endl;
        }
        else if(x>z){
            cout<<"0"<<endl;
        }
    }
}