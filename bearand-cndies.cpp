#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    int as = 0, counter = 0, bs = 0, bob = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        while (as <= a && bs <= b)
        {
            counter += 1;
            as = as+counter;
            counter =counter+1;
            bs = bs+counter;
        }
        if(as>a && bs >b){
            cout<<"bob"<<endl;

        }
        else if(as>a){
            cout<<"bob"<<endl;
            
        }
        else{
            cout<<"limak"<<endl;

        }
    }
}