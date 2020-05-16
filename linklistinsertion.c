#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
//to insert node at beginning.
void push(struct node** head_ref,int x)
{
    printf("Enter data:");
    scanf("%d",&x);
    //1.allocate new node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    //2.put in the data
    newnode->data=x;
    //3.make next of new node as head
    newnode->next=(*head_ref);
    //4.move the head to point the new node
    *head_ref=newnode;
}
//to insert node after a given previous node
void insertafter(struct node* prevnode,int x)
{
    printf("Enter data:");
    scanf("%d",&x);
    //1.check if the previous node is null
    if(prevnode==NULL)
    {
        printf("The given previous node cannot be null");
        return;
    }
    //2.allocate node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    //3.put in the data
    newnode->data=x;
    //4.make next of the new node as next of previous node
    newnode->next=prevnode->next;
    //5.move the next of previous node as new node
    prevnode->next=newnode;
}
//to insert at the end of list
void append(struct node** head_ref,int x)
{
    printf("Enter data:");
    scanf("%d",&x);
    //1.allocate node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    struct node *last=*head_ref;//used in step 5.

    //2.put in the data
    newnode->data=x;
    //3.new node is going to be last node, so point it to null
    newnode->next=NULL;

    //4.if the list is empty,make new node as head
    if(*head_ref==NULL)
    {
        *head_ref=newnode;
        return;
    }
    //5.else traverse till the last node
    else
    {
        while(last->next!=NULL)
            last=last->next;
    }
    //6.change the next of last node
    last->next=newnode;
    return;
}
//to print the list
void printlist(struct node*n)
{
    printf("\nCreated linked list is:\n ");
    while(n!=NULL)
    {
        printf("%d",n->data);
    n=n->next;
    }
}
int main()
{
    int x,ch;
    struct node *head=NULL;

    do
    {
    printf("\n1.Insert node at beginning");
    printf("\n2.Insert node at the end");
    printf("\n3.Insert node at middle");
    printf("\n4.Display list");
    printf("\n5.Quit");
    printf("\nEnter you choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:push(&head,x);break;
        case 2:append(&head,x);break;
        case 3:insertafter(head->next,x);break;
        case 4:printlist(head);break;
        case 5:break;
        default:
            printf("Invalid choice");
    }
    }
    while(ch!=0);
    getch();
    return 0;
}
