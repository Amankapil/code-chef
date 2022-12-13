#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
   }
}
int main() {
    int t;
    cin>>t;
   while (t--)
    {
        int n;
        cin >> n;
        int a[n];
         selectionSort(a,n);
        if(selectionSort){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
}