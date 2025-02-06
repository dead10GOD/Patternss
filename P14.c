#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=row;i>=1;i--)
    {
        if (i==1 || i==2 || i==row)
        {
            for (j=i;j>=1;j--)
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