#include<iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        int arr[n];
        int p = n - 1;
        int time = 0;
        int trainA = 0;
        int trainB = 0;

        for (int i = 1; i < n; i++)
        {
            std ::cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            time += arr[i];
            trainB = max(trainB,arr[p]);
        }

      trainB + time;
        std::cout << trainB + time << std::endl;
    }
}