#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%i", &n);
    for (i = 1; i < n; i++)
    {
        printf("*");
    }
    return 0;
}