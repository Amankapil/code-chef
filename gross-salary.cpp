#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double n, hra, dr,gros;
        cin>>n;
        if(n<1500){
            hra = 0.1*n;
            dr= 0.9*n;
            gros = n+hra+dr;
            // cout<<gros;
        }
        else{
            dr = 500;
            hra = 0.98*n;
            gros = n+dr+hra;
        }
            cout<<fixed<<setprecision(6)<<gros<<endl;
    }
    
    return 0;
}