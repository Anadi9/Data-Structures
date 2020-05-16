#include<stdio.h>

int main()
{
    int arr[6],i;

    printf("Enter the elements of an array \n");
    for(i=0;i<6;i++)
        scanf("%d",&arr[i]);

    printf("The elements of an array are \n");
    for(i=0;i<6;i++)
        printf("%d\n",arr[i]);
}
