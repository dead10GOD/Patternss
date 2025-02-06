#include<stdio.h>
int main ()
{
    int i,j,row,element;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    element=1;
    for (i=1;i<=row;i++)
    {
        for (j=row-i;j>=1;j--)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            printf("%d",element);
            if (j<i)
            {
                element++;
            }
            else  
            {
                element--;
            }
            
        }
        element=1;
        printf("\n");
    }
}