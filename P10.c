#include<stdio.h>
int main()
{   //RECTANGLE WITH INPUT ROWS AND COLUMN
    int i,j,row,column;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    printf("Enter no of columns:");
    scanf("%d",&column);
    for (i=1;i<=row;i++)
    {
        j=column;    // j is also the no of elements that is same as no of columns
        do
        {
            printf("*");

            
            j-=1;
        }
        while (j!=0);
        printf("\n");
    }
}