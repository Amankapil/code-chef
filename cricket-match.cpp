#include <iostream>
using namespace std;

int main()
{
    int R , O , C;
    cin >> R>>O>>C;
    int rover= 20-O;
    int gettopaly= rover*6;
    int tri = gettopaly *6;
    if (R<=tri+C)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
