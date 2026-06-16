#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("_ ");
        }
        else
        {
            printf("* ");
        }
    }
    printf("\n");
    return 0;
}