#include<stdio.h>
int main()
{
    int i,row,r;
    printf("how many rows do you want:");
    scanf("%d",&row);
    printf("\n");
    r=1;
    for (i=row;i>=1;i--)
    {
        while (r<=i)
        {
            printf("%d",i);
            r+=1;        //controlling elements with it
        }
        r=1;            //reseting value of r for the next row
        printf("\n");   //changing line for next row

    }
}