#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node*next;
};
//to insert node
void push(struct node**head_ref,int x)
{
    printf("\nEnter data:");
    scanf("%d",&x);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=*head_ref;
    *head_ref=newnode;
}
void insertafter(struct node* prevnode,int x)
{
    printf("\nEnter data:");
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
void append(struct node** head_ref,int x)
{
    printf("\nEnter data:");
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
//to delete a node
void deletenode(struct node **head_ref,int key)
{
    int i;
    printf("\nData to be deleted:");
    scanf("%d",&key);
    //store head node
    struct node* temp=*head_ref,*prev;

     // If head node itself holds the key to be deleted
    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next; //change head
        free(temp);           //free old one
        return;
    }
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    //if key was not present in linked list
    if(temp==NULL)
        return;
    //unlink the node from the linked list
    prev->next=temp->next;
    free(temp);
}
//to search an element in list
bool search(struct node*head,int x)
{
    printf("\nEnter element to search in list:");
    scanf("%d",&x);

    struct node*current=head; //initialize current
    while(current!=NULL)
    {
        if(current->data==x)
        {
            printf("True");
            return true;
        }
        current=current->next;
    }
    printf("False");
    return false;
}
//to print list
void print(struct node *n)
{
    printf("\nCreated linked list is:");
    while(n!=NULL)
    {
        printf("%d",n->data);
        n=n->next;
    }
}
int main()
{
    int x,position,ch;
    struct node*head=NULL;

    do
    {
         printf("\n\n1.Insert node at beginning");
         printf("\n2.Insert node at the end");
         printf("\n3.Insert node at middle");
         printf("\n4.Delete a node");
         printf("\n5.Display list");
         printf("\n6.Search an element");
         printf("\n7.Quit");
         printf("\nEnter you choice:");
         scanf("%d",&ch);

         switch(ch)
         {
              case 1:push(&head,x);break;
              case 2:append(&head,x);break;
              case 3:insertafter(head->next,x);break;
              case 4:deletenode(&head,position);break;
              case 5:print(head);break;
              case 6:search(&head,x);break;
              case 7:break;
              default:
                   printf("Invalid choice");
         }
    }
         while(ch!=0);
         getch();
         return 0;
}
