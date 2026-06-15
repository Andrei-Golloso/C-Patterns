#include<stdio.h>
#include<conio.h>

void main(){
int i,j,n;
clrscr();
printf("Enter a number: ");
scanf("%i",&n);
for (i = 1; i < n; i++) {
printf("*");
}
getch();
}