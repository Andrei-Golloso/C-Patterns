#include <stdio.h>

int main()
{
    int x, y, n, i = 0;
    printf("Enter a no: ");
    scanf("%i", &n);
    for (y = 1; y <= (n * n); y++)
    {
        i++;
        printf("* ");
        if (i >= n)
        {
            printf("\n");
            i = 0;
        }
    }
    return 0;
}
