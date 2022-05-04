#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int w1,w2,x1,x2 ,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int change = w2-w1;
        int increase = m *x1;
        int increase1 = m *x2;
        if (change>=increase && change <= increase1)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        


    }
    
	return 0;
}
