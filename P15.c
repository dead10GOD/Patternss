#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        if ( i==1 || i==2 || i==row)
        {
            for (j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for (j=1;j<=i-2;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    
}