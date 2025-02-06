#include<stdio.h>
int main()
{
    int i,j,e,term;
    e=9;
    for (i=1;i<=5;i++)
    {
        term=i;
        for (j=1;j<=5;j++)
        {
            printf("%d ",term);
            if(j%2==0)
            {
                term=term+10-e;
            }
            else
            {
                term+=e;
            }
        }
        printf("\n");
        e=e-2;
    }
}