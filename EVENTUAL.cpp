#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , count = 0;
        cin >> n;
        string s;
        n = s.size();
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==s[i]){
                count++;
            }
        }
        if(count%2==0){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<count;
    // }
}
