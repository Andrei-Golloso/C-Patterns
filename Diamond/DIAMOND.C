#include<stdio.h>
#include<conio.h>

void main(){
int x, y, n, strt, end, cntr;
clrscr();

printf("Enter a Number:"); scanf("%i", &n);

cntr=((n-1)/2)+1;
strt=cntr;
end=cntr;

for(y=1;y<=n;y++){

  for(x=1;x<=n;x++){
    if(x>=strt && x<=end){
       printf("* ");
    }
    else{
       printf("_ ");
    }
 }
 printf("\n");

    if(y<cntr){
       strt--; end++;
    }
    else{
       strt++; end--;
    }
 }

getch();
}