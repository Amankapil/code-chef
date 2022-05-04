#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int quan, price;
        cin >>quan>> price;
        double total= quan*price;
        double tota =  total-(0.1*(total));
        if(quan>1000){
        cout<<tota;
        }
        else{
            cout<<total;

        }
    }
}