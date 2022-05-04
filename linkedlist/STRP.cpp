#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int  t;
    cin>>t;
    while (t--)
    {
        int n ,count = 0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i!=s[i+1]]){
                count ++;
            }
            else if (s[i]==s[i+1])
            {
                s[i]==0;
                count++;
            }
            
        }
            cout<<count<<endl;
        
    }
}