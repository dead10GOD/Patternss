#include<stdio.h>
int main()
{
    int i,j,row,term;
    printf("enter no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=row;j++)
        {
            term=i*j;     // or term=i+(j-1)*i
            printf("%d",term);
        }
        printf("\n");
    }
}