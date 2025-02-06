#include<stdio.h>
int main()
{
    int i,j,row,column;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    printf("Enter no of columns:");
    scanf("%d",&column);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=column;j++)
        {
            if (j==1 || j==column || i==1 || i==row )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}