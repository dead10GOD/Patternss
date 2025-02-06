#include<stdio.h>
int main()
{
    int i,j,e,row;
    printf("enter the number of rows:");
    scanf("%d",&row);
    e=0;
    for (i=1;i<=2*row-1;i++)
    {
        for (j=1;j<=e;j++)
        {
            printf(" ");
        }
        for (j=1;j<=e+1;j++)
        {
            printf("*");
        }
        if (i<row)
        {
            e++;
        }
        else
        {
            e--;
        }
        printf("\n");
    
    }
}