#include<stdio.h>

int main()
{
    int i,arr[6];
    int *p;
    p=arr;
     printf("Enter the elements of an array \n");
      for(i=0;i<6;i++)
        scanf("%d",arr+i);

     printf("The elements of an array are \n");
         for(i=0;i<6;i++)
        printf("%d\n",*(p+i));
}

