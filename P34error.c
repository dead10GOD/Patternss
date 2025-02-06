#include<stdio.h>
int main()
{
    int i,j,row,e;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    e=1;
    for (i=1;i<=row;i++)
    {
        for (j=row-i;j>=1;j--)
        {
            printf(" ");
        }
        for (j=e;j<=i;j++)
        {
            if (i%2==0)
            {
                printf("%c",64+j);
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
      
        if (i%2!=0)
        {
            e--;
        }
    }
}