#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
            if ((i+j)%2==0)
            {
                printf("1");
            }
            else 
            {
                printf("0");
            }
        }
        printf("\n");
    }
}