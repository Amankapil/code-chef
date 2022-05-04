#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int a1,a2,a3,a4,a5,p;
        cin>>a1>>a2>>a3>>a4>>a5>>p;
        int sum = a1+a2+a3+a4+a5;
        int work = p*sum ;
        if(work <=120){
            cout<<"no"<<endl;

        }
        else{
            cout<<"yes"<<endl;
        }
    }
    
	return 0;
}
