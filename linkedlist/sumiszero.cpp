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
void makelist(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void sumiszero(node *&head)
{
    node *temp = head;
    node *ans = 0;
    while (temp != NULL)
    {
        ans = +temp->next;
    }
    cout << ans;
}

void display(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "<-";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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
void deletemid(node *&head)
{
    node *fastptr = head;
    node *slowptr = head;
    node *prevptr;
    while (fastptr->next != NULL && fastptr != NULL)
    {
        fastptr == fastptr->next->next;
        prevptr = slowptr;
        slowptr = slowptr->next;
    }
    prevptr->next = slowptr->next;
    delete slowptr;
}

void reoveduplicate(node *&head)
{
    node *temp = head;
    node *dup = head->next;
    while (temp != NULL)
    {
        temp = temp->next;
        if (temp->data == dup->data)
        {
            node *ec = dup;
            dup = dup->next;
            temp->next = dup;
            delete ec;
        }
        else
        {
            temp = temp->next;
            dup = dup->next;
        }
    }
}
node *reverse(node *&head)
{
    node *prev = NULL;
    node *currn = head;
    node *next;
    while (currn != NULL)
    {
        next = currn->next;
        currn->next = prev;
        prev = currn;
        currn = next;
    }
    return prev;
}
node *summ(node *&head)
{
    head = reverse(head);
    bool f = true;
    node *current = head;
    while (current != NULL)
    {
        if (current->next == NULL && current->data == 9)
        {

            current->data = 1;
            node *temp = new node(0);
            temp->next = head;
            temp = head;
            current = current->next;
        }
        else if (current->data == 9)
        {
            current->data = 0;
            current = current->next;
        }
        else
        {
            current->data = current->data + 1;
            current = current->next;
        }
    }
    head = reverse(head);
    return head;
}

int main()
{
    node *head = NULL;
    int arr[4] = {
        1,
        2,
        2, 
        9,
    };
    for (int i = 0; i < 5; i++)
    {
        makelist(head, arr[i]);
    }
    reoveduplicate(head);
    display(head);
    //  node* newhead = summ(head);
    // display(newhead);
}