#include<stdio.h>
int main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9};
    int *p;
    p=A[0];

    printf("%d\n",*p+3);

}

