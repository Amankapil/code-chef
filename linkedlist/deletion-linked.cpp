#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;

    node(int val){
        data = val; 
        next = NULL;
    }

};

void delet(node* &head , int val){
    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;    
}

