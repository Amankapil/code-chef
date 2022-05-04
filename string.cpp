#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <climits>
#include <vector>
using namespace std;
// void swap(int i, int j)
// {
//     int temp = i;
//     i = j;
//     j = temp;
// }
int main()
{
    string s, s1;
    cin >> s >> s1;
    int co = 0;
    int l = s.size();
    int m = s1.size();
    cout << l << " " << m << endl;
    cout<< s + s1;
    // s.append(s1);
    cout << s<<endl;
    swap(s[0], s1[0]);
    cout<<s<<" "<<s1<<endl;
}