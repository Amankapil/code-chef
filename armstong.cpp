#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp;
    cin >> n;
    temp = n;
    int sum = 0;
    int count = 0;
    int lastdigit;

    while (n>0)
    {
        lastdigit = n % 10;
        count += 1;
        sum = sum + pow(lastdigit, count);
        n = n / 10;
    }


    if (temp == sum)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}