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
        double d, v1, v2;
        cin>>d>>v1>>v2;
        double vs = (d * sqrt(2) )/ v1;
        double ve = (d * 2) / v2;
        if (vs >= ve)
        {
            cout << "Elevator" << endl;
        }
        else
        {
            cout << "Stairs" << endl;
        }
    }
}