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
        int n, x, y;
        int v = 0;
        int z = 0;
        int total = 0;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
        
           v =  v + a[i];
        }
        
        // if (z < y)
        // {

            for (int i = 0; i < n; i++)
            {
                if(a[i]<y){
                    a[i] ==0;
                }
                else{

                 a[i]-=y;
                 total += a[i];
                }
            }
        // }
        int s =  total + x;
        if (s<v)
        {
            cout<<"COUPON"<<endl;
        }
        else{

            cout<<" NO COUPON"<<endl;
        }
        
    }
}