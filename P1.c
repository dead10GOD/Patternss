#include<stdio.h>
int main()
{
    int i,r,row;
    r=1;
    printf("enter the number of rows you want:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        r=1;  //because the last value of r was i hence we need to reset it back (i.e. =1)for the next row
        do
        {
            printf("*");
            r+=1;
        }
        while (r<=i);            
        // END OF DO WHILE 
        printf("\n");  //changing row 
    }
}