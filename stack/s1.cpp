#include <iostream>
#include <stack>
using namespace std;
#define n 100

class s1
{
    int *arr;
    int top;

public:
    s1()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if (top== -1)
        {
            cout<<"no element to pop"<<endl;
            return ;
        }
        top--;
    }
    int Top(){
        if (top==-1)
        {
            cout<<"no element in stack";
            return -1;
        }
        return arr[top];
        
    }
    bool empty(){
        return top ==-1;
    }
};

int main (){

    s1 st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   cout<< st.Top()<<endl;
    return 0;

}
