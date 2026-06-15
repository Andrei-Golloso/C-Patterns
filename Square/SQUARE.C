#include<stdio.h>

void main(){
int x, y,n,i=0;
clrscr();
printf("Enter a no: ");
scanf("%i",&n);
for(y=1;y<=(n*n);y++){
i++;
printf("* ");
if(i>=n){
printf("\n");
i=0;
}
}
getch();
}
