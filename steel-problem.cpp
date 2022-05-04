#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, ts;
       float cc;
        cin >> h;
        cin>>cc;
        cin>> ts;
        if(h>50 && cc<0.7 && ts >5600){
            cout<<10;
        }
        else if(h>50 && cc<0.7){
            cout<<9;
        }
        else if(h<50 && cc<0.7 && ts >5600){
            cout<<8;
        }
        else if(h<50 && cc>0.7 && ts >5600){
            cout<<7;
        }
       else if(h<50 && cc<0.7 && ts >5600 ){
            cout<<6;
        }
        else if(h>50 && cc>0.7 && ts >5600){
            cout<<6;
        }
        else if (h>50 && cc<0.7 && ts <5600){
            cout<<6;

        }
         else if(h>50 && cc<0.7 && ts <5600){
            cout<<5;
        }


    }
} 