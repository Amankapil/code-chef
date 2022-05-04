#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans, save = 0 ,rem;
    // cin>>t;
    // while (t--)
    // {
    int n;
    cin >> n;
    while (n % 10 != 0)
    {
        ans = n % 10;
        save = save + ans;
        n = n / 10;
    }
    rem = save; 
    // cout<<rem<<endl;
    if(rem%2 !=0){
        cout<<n+1<<endl;
    }
    else{
        cout<<n<<endl;
    }

    // }
}