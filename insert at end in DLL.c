#include<iostream>
using namespacs std;

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

void insertend(struct node**head,int value)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        struct node*temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
};
void display_node(struct node*head)
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
};

int main()
{
    struct node*head=NULL;
    insertend(&head,10);
    insertend(&head,20);
    insertend(&head,30);
    insertend(&head,40);
    display_node(head);
    return 0;
}
