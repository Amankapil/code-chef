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

void last( node* head , int val){
    node* n = new node(val);
    n->next= head;
    head = n;
    if (head == NULL)
    {
        head = n;
        return ;
    }
}

void inslink(node* &head, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head = n;
        return ;
    }
    
    node* temp = head;
    while (temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
    
}

bool search(node* head , int key){
    node* temp = head;
    while (temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp= temp->next;
        
    }
    return false;
    
}
void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
      cout<<temp->data<<"->";
      temp = temp->next;
    }cout<<"NULL"<<endl;
    
}
int main()
{
    node* head = NULL;
    inslink(head ,1);
    inslink(head ,2);
    inslink(head ,3);
    display(head);
    last(head ,4);
    display(head);
    cout<<search(head, 3);
    
}