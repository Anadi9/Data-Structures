#include<stdio.h>
#define n 5
int dque[n];
int f=-1,r=-1;

void enquefront()
{
    int x;

    printf("Enter data:");
    scanf("%d",&x);

    if((f==0 && r==n-1) || (f=r+1))
    {
        printf("Queue is full");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        dque[f]=x;
    }
    else if(f==0)
    {
        f=n-1;
        dque[f]=x;
    }
    else
    {
        f--;
        dque[f]=x;
    }
}
void enquerear()
{
    int x;

     printf("Enter data:");
    scanf("%d",&x);

    if((f==0 && r==n-1) || (f=r+1))
    {
        printf("DeQueue is full");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        dque[r]=x;
    }
    else if(r==n-1)
    {
        r=0;
        dque[r]=x;
    }
    else
    {
        r++;
        dque[r]=x;
    }
}
void display()
{
    int i=f;
    printf("DeQueue is: ");
    while(i!=r)
    {
       printf("%d",dque[i]);
       i=(i+1)%n;
    }
    printf("%d",dque[r]);
}
void getfront()
{
    if(f==-1 && r==-1)
    {
        printf("DeQueue is empty");
    }
    else
    {
        printf("%d",dque[f]);
    }
}
void getrear()
{
    if(f==-1 && r==-1)
    {
        printf("DeQueue is empty");
    }
    else
    {
        printf("%d",dque[r]);
    }
}
void dequefront()
{
     if(f==-1 && r==-1)
    {
        printf("DeQueue is empty");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else if(f==n-1)
    {
        printf("Deleted element is:%d",dque[f]);
        f=0;
    }
    else
    {
        printf("Deleted element is:%d",dque[f]);
        f++;
    }
}
void dequerear()
{
    if(f==-1 && r==-1)
    {
        printf("DeQueue is empty");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else if(r==0)
    {
        printf("Deleted element is:%d",dque[r]);
        r=n-1;
    }
    else
    {
        printf("Deleted element is:%d",dque[r]);
        r--;
    }
}
int main()
{
    int ch;

    do
    {
        printf("1.Enter front \n2.Enter rear \n3.Display \n4.Peek front \n5.Peek rear \n6.Delete front \n7.Delete rear \nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enquefront();
            break;
            case 2: enquerear();
            break;
            case 3: getfront();
            break;
            case 4: getrear();
            break;
            case 5: display();
            break;
            case 6: dequefront();
            break;
            case 7: dequerear();
            break;
            default:
                printf("Invalid choice");
        }
    }
    while(ch!=0);
    getch();
    return 0;
}
