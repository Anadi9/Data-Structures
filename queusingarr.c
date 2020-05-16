#include<stdio.h>
#define n 5
int que[n];
int front=-1,rear=-1;

void enque()
{
    int x;
    printf("Enter data:\n");
    scanf("%d",&x);
    if(rear==n-1)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
       que[rear]=x;
    }
    else
    {
        rear++;
        que[rear]=x;
    }
}
void deque()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front==rear==-1;
    }
    else
    {
        printf("Deleted element is: %d\n",que[front]);
        front++;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("%d\n",que[front]);
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=front;i<rear+1;i++)
            {
            printf("%d\n",que[i]);
            }
    }
}
int main()
{
    int ch;

    do
    {
        printf("1.Enqueue \n2.Delete \n3.Peek \n4.Display \nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enque();
            break;
            case 2: deque();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            default:
                printf("Invalid choice\n");
        }
    }
    while(ch!=0);
    getch();
    return 0;
}
