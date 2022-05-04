#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int  t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n>>a;
        cout<<min(a,n-a);

    }
    
	return 0;
}
