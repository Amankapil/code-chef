#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
        int n , d;
        cin>>n>>d;
           int sum = d;
          for(int i = 1; i<=n;i++){
              sum = (sum*(sum+1))/2;
          }
          cout<<sum;

    }
    
    
}