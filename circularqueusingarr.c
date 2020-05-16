#include<stdio.h>
#define n 5
int que[n];
int front=-1,rear=-1;

void enque()
{
    int x;

    printf("Enter data:");
     scanf("%d",&x);

    if((rear+1)%n==front)
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
        rear=(rear+1)%n;
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
        front=rear=-1;
    }
    else
    {
        printf("Deleted element is:%d",que[front]);
        front++;
    }
}
void display()
{
    int i;

    printf("Queue is:\n");
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        printf("%d\n",que[i]);
    }
    else
    {
        for(i=front;rear=n-1;i++)
           printf("%d\n",que[i]);

     for(i=0;i<=rear;i++)
        printf("%d\n",que[i]);
    }
}
int main()
{
    int ch;

    do
    {
        printf("\n1.Enqueue \n2.Delete \n3.Display \nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enque();
            break;
            case 2: deque();
            break;
            case 3: display();
            break;
            default:
                printf("Invalid choice\n");
        }
    }
    while(ch!=0);
    getch();
    return 0;
}
