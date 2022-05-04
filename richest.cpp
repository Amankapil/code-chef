#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;
    student(string s ,int a, bool g){
        name = s;
        age = a;
        gender = g;
    }
    /////////////////////s

    void setname(string s)
    {
        name = s;
    }
    ////////////////
    void getname(){
        cout<<name;
    }
    student(){
        cout<<"default constructur";
    }
    /////////////////
    void printinfo()
    {
        cout << "name =";
        cout << name << endl;
         cout << "age =";
        cout << age << endl; 
        cout << "gender =";
        cout << gender << endl; 
    }
};
int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "name =";
    //     cin >> s;
    //     arr[i].setname(s);
    //     cout << "age =";

    //     cin >> arr[i].age;
    //     cout << "gender =";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }
    student a("aman", 20,1 );
    a.printinfo();
    student b;



    return 0;
}