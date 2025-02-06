#include<stdio.h>
int main()
{
    int i,j,star,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    star=1;
    for (i=1;i<=2*row-1;i++)
    {
        for (j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<row)
            {
                star++;
            }
        else 
            {
                star--;
            }
    }
}