#include <stdio.h>

int main()
{
    int j, i, n;

    printf("Enter a no: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= n - (i - 2) && j <= n + (i - 2))
            {
                printf("_ ");
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}