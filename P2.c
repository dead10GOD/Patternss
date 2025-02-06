#include<stdio.h>
int main()
{
    int i,row,r;
    printf("how many rows do you want:");
    scanf("%d",&row);
    r=1;
    for (i=row;i>=1;i--)
    {
        while (r<=i)
        {
            printf("*");
            r+=1;
            
        }
        r=1;
        printf("\n");
    }
}