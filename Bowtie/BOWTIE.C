#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, strt, end, cntr;

    printf("Enter a number:");
    scanf("%i", &n);

    cntr = ((n - 1) / 2) + 1;
    strt = n / n;
    end = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j > strt && j < end)
            {
                printf("_ ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
        if (i < cntr)
        {
            strt++;
            end--;
        }
        else
        {
            if (i >= cntr)
            {
                strt--;
                end++;
            }
        }
    }
    return 0;
}