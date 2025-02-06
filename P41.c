#include <stdio.h>
int main()
{
    int i, j, e, row;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    e = 1;
    for (i = 1; i <= 2 * row - 1; i++)
    {
        for (j = row - e; j >= 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * e - 1; j++)
        {
            if (i == row)
            {
                printf("%d", e + 1 + j);
            }
            else
            {
                printf("%d", j);
            }
        }
        if (i < row)
        {
            e++;
        }
        else
        {
            e--;
        }
        printf("\n");
    }
}