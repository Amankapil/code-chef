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
        int row,seat;
        cin>>row >>seat;
        cout<<(row+1/2)*(seat+1/2);
    }
}