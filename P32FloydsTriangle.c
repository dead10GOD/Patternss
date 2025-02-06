#include <stdio.h>
int main() // FLOYD'S TRIANGLE
{
    int i, j, row, element;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    element = 1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", element);
            element++;
        }
        printf("\n");
    }
}