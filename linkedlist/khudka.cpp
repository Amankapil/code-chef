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
void rem(node *&head)
{
            node* temp = head;

    while (temp->next!=NULL)
    {

        if (temp->data == temp->next->data)
        {
            // node*ec ;
            // ec= head->next;
            temp->next = temp->next->next;
            //  ec = head;
            // delete ec;s
        }
        else
        {
            temp = temp->next;
        }
    }
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
node *reversek(node *&head, int k)
{
    node *preptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return preptr;
}

void delet(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
// node* reverse(node* &head)
// {
//     node* preptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     while (currptr != NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = preptr;
//         preptr = currptr;
//         currptr = nextptr;
//     }
//     return preptr;
// }

// node* rr(node* &head){

//     if ( head->next=NULL)
//     {
//         return head;
//     }

//     node* newhead = rr(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
int main()
{
    node *head = NULL;
    add(head, 1);
    add(head, 2);
    add(head, 2);
    add(head, 4);
    add(head, 5);
    add(head, 6);
    display(head);
    // delet(head,2);
    rem(head);
    display(head);
}