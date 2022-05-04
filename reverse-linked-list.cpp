#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node* reverse(node* &head)
{
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;
}

node* rr(node* &head){

    if ( head->next  = NULL)
    {
        return head;
    }
    
    node* newhead = rr(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}








void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node* head = NULL;

    node(1);
    node(2);
    node(3);
    node(4);
    node(5);
    display(head);
}