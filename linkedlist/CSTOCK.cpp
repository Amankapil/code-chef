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
        double s,a,b,c;
        cin>>s>>a>>b>>c;
        double inc = s + s*c/100;
        if(inc>=a && inc <=b){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}