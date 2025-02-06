#include<stdio.h>
int main()
{
    int i,j,row,e;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    e=0;
    for (i=0;i<=row-1;i++)
    {
        for (j=row-i-1;j>=0;j--)
        {
            printf(" ");
        }
        for (j=1;j<=2*i+1;j++)
        {
            printf("%d",e);
            if (j<i+1)
            {
                e--;
            }
            else
            {
                e++;
            }

        }
        printf("\n");
    }
}