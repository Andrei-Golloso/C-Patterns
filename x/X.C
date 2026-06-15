#include<stdio.h>
#include<conio.h>

void main(){
int i,j,n;
clrscr();

printf("Enter a number: ");
scanf("%i",&n);
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
if (i == j || j == (n - i - 1))
printf("* ");
else
printf("_ ");
}
printf("\n");
}
getch();
}