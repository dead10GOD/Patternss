#include<stdio.h>
int main ()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=2*row-1;i++)
    {
        for (j=1;j<=2*row-1;j++)
        {
            if (j==i || j==2*row-i)
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