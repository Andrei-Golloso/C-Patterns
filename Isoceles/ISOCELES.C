#include<stdio.h>
#include<conio.h>

void main(){
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%i",&n);

for(i=1; i<=n; i++) {
for(j=1; j <= 2*n-1; j++) {
if(j >= n-(i-1) && j <= n+(i-1)) {
printf("* ");
}
else
printf("_ ");
}
printf("\n");
}
getch();
}