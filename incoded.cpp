#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    int store = 0, day = 0;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        n = s.size();
        for (int i = 0; i < n-1; i+=2)

        {
            swap(s[i],s[i+1]);            
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = 'z'+'a'-s[i];
        }
        
        cout<<s<<endl;
        
    }
}