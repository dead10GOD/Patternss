#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (k=1;k<=2*(row-i);k++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        { 
            printf("*");
        }
        printf("\n");  
    }
}    