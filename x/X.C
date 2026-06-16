#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter a number: ");
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || j == (n - i - 1))
                printf("* ");
            else
                printf("_ ");
        }
        printf("\n");
    }
    return 0;
}