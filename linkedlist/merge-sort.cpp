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

node *mergerec(node *head1, node *head2)
{
    node *result;
    if (head1 == NULL)
    {
        return head1;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->next < head2->next)
    {
        result = head1;
        result->next = mergerec(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergerec(head1, head2->next);
    }
    return result;
}

int length(node *head)
{
    int l;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
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
void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "<-";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}
void ins(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head->next = n;
        head = n;
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void circular(node *&head, int val)
{
    if (head == NULL)
    {
        ins(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
int main()
{
    node *head = NULL;
    int arr[]={ 6,5,4,3,2,1};
    for (int i = 0; i < 6; i++)
    {
       circular(head,arr[i]);
    }
    display(head);
      node* newhead = mergerec(head , head);
    display(newhead);
    // circular(head, 1);
    // circular(head, 2);
    // circular(head, 3);
    // circular(head, 4);
    // circular(head, 5);
    // circular(head, 6);
    return 0;
}