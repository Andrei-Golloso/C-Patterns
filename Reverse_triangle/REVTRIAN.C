#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");
    }
    return 0;
}