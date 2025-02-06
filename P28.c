#include<stdio.h>
int main()
{
    int i,j,sp,row;     //sp means space in between
    printf("Enter the no of rows:");
    scanf("%d",&row);
    sp=0;
    for (i=1;i<=2*row-1;i++)
    {
        for (j=1;j<=2*row;j++)
        {
            if (j>(2*row-sp)/2 && j<(2*row-sp)/2 + sp + 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        if (i<row)
        {
            sp+=2;
        }
        else // that is i>=row
        {
            sp-=2;
        }
    }
}