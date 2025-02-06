#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    
    if (row<0)
    {
        printf("negative row : exit statues (use echo $?)");
        return 7;
    }    
    else
    {
    for (i=1;i<=row;i++)
    {
        for (k=1;k<=i-1;k++)
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
}