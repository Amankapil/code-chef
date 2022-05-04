#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void add(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}


void rmcycle(node* &head){
    node* fast = head;
    node* slow = head;

    do
    {
        slow =  slow->next ;
        fast = fast->next->next;
    } while (slow!= fast);

    while (fast->next!=slow->next)
    {
        slow = slow->next;
        fast = fast->next;
        
    }
    slow->next= NULL; 
    
    

}
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detect(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
        return false;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    add(head, 1);
    add(head, 2);
    add(head, 3);
    add(head, 4);
    add(head, 5);
    add(head, 6); 
    // delet(head,2);
    //  makecycle(head, 3);
    cout << detect(head)<<endl;
    rmcycle(head);
    cout << detect(head) << endl;  

    display(head);
}