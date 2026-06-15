#include <stdio.h>

void main(){
int n,x,y;
clrscr();

printf("Enter A Number : ");
scanf("%i",& n);

for(y=0;y<n;y++){
for(x=1;x<=n;x++){
if(y>(n/2)-1){
if(x>y-n/2 && x<=n -(y-n/2)){
printf("* ");
}
else{
printf("_ ");
}
}
else if(x>(n/2)-1 && x<=(n/2)+2){
printf("* ");
}
else{
printf("_ ");
}
}
printf("\n");
}
getch();
}