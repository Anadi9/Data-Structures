#include<stdio.h>
int main()
{
    int A[3][3],i,j;

    printf("Enter the elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     printf("Elements of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",A[i][j]);
        }
    }
}
