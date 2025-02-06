#include <stdio.h>
int main()
{
    int i, j, row, k;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}