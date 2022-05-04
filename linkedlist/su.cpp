#include<iostream>
using namespace std;

int main()
{
  int num,num1,total;
  float avg;
  cout<<"Enter how many number ";
  cin >>num;
      int sum=0;
  for(int i=0;i<num;i++)
  {
      cout<<"enter number";
      cin>>num1;
      sum=sum+num1;
      
  }  
  avg= sum/num;
  cout<<"avrg is"<<avg;

} 

