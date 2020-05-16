#include<stdio.h>
#define n 3
int stack[n];
int i,top=-1;

void Push()
{
    printf("Enter data:\n");
    if(top==n-1)
    {
        printf("Overflow");
    }
    else
    {
        for(i=0;i<n;i++)
            scanf("%d",&stack[i]);
            top++;
    }
}
void Pop()
{
    int m[n];
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
         m[i]=stack[top];
        for(i=top;i>=0;i--)
            printf("%d",m[i]);
    }
}
int main()
{
    int ch,arr[n];

    do
    {
        printf("\n1.Push \n2.Pop \nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: Push();
            break;
            case 2: Pop();
            break;
        default:
            printf("Invalid choice");
        }
    }
    while(ch!=0);
    getch();
    return 0;
}
