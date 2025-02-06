#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=2*row-1;i++)
    {
        if (i<=row)
        {
            for (j=1;j<=row-i;j++)
            {
                printf(" ");
            }
            for (j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else     // THAT IS WHEN i>ROW 
        {
            for (j=1;j<=i-row;j++)
            {
                printf(" ");
            }
            for (j=1;j<=2*(2*row-i)-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }

    }
}