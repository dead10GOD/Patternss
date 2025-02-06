#include <stdio.h>
int main()
{
    int i, j, star, row;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    star = 0;
    for (i = 1; i <= 2 * row - 1; i++)
    {
        if (i <= row)
            star++;
        else
            star--;
        for (j = 1; j <= row - star; j++) // (row-star) is actually the number of initial spaces
            printf(" ");
        for (j = 1; j <= star; j++)
            printf("*");
        printf("\n");
    }
}