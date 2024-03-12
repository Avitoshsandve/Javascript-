#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
void insertlast(struct node** head, int value)
{
    struct node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    if (*head == NULL)
    {
        newnode->prev = NULL;
        *head = newnode;
    }
    else
    {
        struct node* last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
        newnode->prev = last;
    }
}
void insertposition(int pos,int data,struct node *head)
{
    struct node* newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    struct node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next->prev = newnode;
};

void display(struct node *head)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    struct node* head = NULL;
    insertlast(&head, 1);
    insertlast(&head, 2);
    insertlast(&head, 3);
    insertlast(&head, 4);
    insertlast(&head, 5);
    insertposition(3,10,head);
    display(head);
    return 0;
}