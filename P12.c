#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=row;i>=1;i--)
    {
        for (k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for (j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}