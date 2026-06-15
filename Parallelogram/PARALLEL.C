#include<stdio.h>
#include<conio.h>

void main() {
int i, j, n, shift;
clrscr();
printf("Enter a number: ");
scanf("%i", &n);

for (i = 0; i < n; i++) {
shift = n - i - 1;
for (j = 0; j < n + shift + i; j++) {
if (j < shift) {
printf("_ ");
}
else if (j < n + shift) {
printf("* ");
}
else {
printf("_ ");
}
}
printf("\n");
}
getch();
}