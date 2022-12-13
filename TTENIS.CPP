#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string   s;
        cin >> s;
        int count =0 , countt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1'){
                count+=1;
            }
            else{
                countt+=1;
            }
        }
        if (count>countt)
        {
            cout<<"WIN"<<endl;
        }
        else{
            cout<< "LOSE"<<endl;
        }
        
        
    }
}