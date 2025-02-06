#include <stdio.h>
void main()
// DIAMOND OPTIMISED
{
    int i, j, star, row;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    star = 0;
    for (i = 1; i <= 2 * row - 1; i++)
    {
        if (i <= row)
        {
            star++;
        }
        else
        {
            star--;
        }
        for (j = 1; j <= row - star; j++) // (row-star) controls the initial spaces
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * star - 1; j++) //(2*star-1) because stars are increasing inn odd numbers
        {
            printf("*");
        }
        printf("\n");
    }
}