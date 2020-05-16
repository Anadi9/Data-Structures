#include<stdio.h>
#define max 5

    int stack[max];
    int top=-1;

    void Push()
    {
        int x;
        printf("Enter data:");
        scanf("%d",&x);
        if(top==max-1)
        {
            printf("Overflow");
        }
        else
        {
            top++;
            stack[top]=x;
        }
    }
    void Pop()
    {
        int item;
        if(top==-1)
        {
            printf("Underflow");
        }
        else
        {
            item=stack[top];
            top--;
            printf("%d",item);
        }
    }
    void Peek()
    {
        if(top==-1)
        {
            printf("Stack is empty");
        }
        else
        {
            printf("%d",stack[top]);
        }
    }
    void Display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }

int main()
{
    int ch;

    do
    {
        printf("\nEnter choice: \n1.Push \n2.Pop \n3.Peek \n4.Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: Push();
            break;
            case 2: Pop();
            break;
            case 3: Peek();
            break;
            case 4: Display();
            break;
            default:
                 printf("Invalid choice");
        }
    }
    while(ch!=0);
        getch();
        return 0;
}
