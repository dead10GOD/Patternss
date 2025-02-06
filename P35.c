#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        if(i%2==0)
        {
            for (j=i;j>=1;j--)
            {
                printf("%d",j);
            }
        }
        else
        {
            for (j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}