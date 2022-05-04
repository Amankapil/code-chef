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
        int x, y;
        cin >> x >> y;
        int ds = x*100;
        int cl = y*10;
        if(ds>cl){
                cout<<"Disposable"<<endl;
        }
        else{
            cout<<"Cloth"<<endl;
        }
    }
}