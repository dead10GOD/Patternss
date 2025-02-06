#include<stdio.h>
int main()
{
    int i,r,row;
    printf("how many rows do you want:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (r=1;r<=i;r++)
        {
            printf("*");
        }
        printf("\n");        //changing row
    }
}