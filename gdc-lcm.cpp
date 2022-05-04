#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gdc(int a, int b ){
    if(b>a){
        gdc(b,a);
    }
    else if(b ==0 ){
        return 0;
    }
    else{
        return ( b , a%b);
    }
}
int lcm(int a , int b){
    int k = gdc(a,b);
 return (a / gdc(a, b)) *b;
 }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin>>a>>b;
        cout<<gdc(a,b)<<endl;
        cout<<lcm(a,b)<<endl;
    }
}