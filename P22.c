#include<stdio.h>
int main()
{   //HOLLOW HOUR GLASS
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    //UPPER REVERSE PYRAMID
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            if (j==1 || j==2*i-1 || i==row)
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
    //FOR LOWER PYRAMID
    for (i=2;i<=row;i++)
    {
        for (j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            if (j==1 || j==2*i-1 || i==row)
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