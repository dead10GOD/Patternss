#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        if (i==1 || i==2 || i==row)
        {
            for (j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else   // will be executed only if 'i' is not equal to the first second or the last row
        {
            printf("*");
            for (j=1;j<=i-2;j++) //here j does the job of k also
            {                    //in the if block j controles the elements 
                printf(" ");     //while in the else block it controls the spaces
            }
            printf("*\n");
        }
    }
} 