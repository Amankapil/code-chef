#include <iostream>
#include <stack>
using namespace std;
// void reversesentece(string s)
// {
//     stack<string> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         string word = "";
//         while (s[i] !=' ' && i < s.length())
//         {
//             word += s[i];
//             i++;
//         }
      
//       st.push(word);
//     }
//         while (!st.empty())
//         {
//             cout << st.top() << " ";
//             st.pop();
//         }
//         cout << endl;
// }
void reverseatbottum(stack<int> &st , int ele){
    if (st.empty())
    {
        st.push(ele);
        return;
        
    }
    
    int topele = st.top();
    st.pop();
    reverseatbottum(st, ele);
    st.push(topele);    
}


void reversenum(stack<int> &st ){
    if (st.empty())
    {
        return;
    }
    
    int ele = st.top();
    st.pop();
    reversenum(st);
    reverseatbottum(st , ele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3); 
    st.push(4); 
    st.push(5); 
    // reversenum(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    // string s = " hey how are you doing?";
    // reversesentece(s);
}