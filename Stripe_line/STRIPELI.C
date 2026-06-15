#include<stdio.h>
#include<conio.h>

void main(){
int n,i;
clrscr();

printf("Enter a no: ");
scanf("%i",&n);

for(i=1;i<=n;i++) {
if(i % 2==0) {
printf("_ ");
}
else{
printf("* ");
}
}
printf("\n");
getch();
}