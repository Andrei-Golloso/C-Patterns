#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("_ ");
        }
        printf("\n");
    }
    return 0;
}