#include <stdio.h>
void pattern(int);
int main()
{
    int row;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    pattern(row);
}

void pattern(int n)
{
    if (n < 1)
        return;
    
    pattern(n - 1);

    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
}