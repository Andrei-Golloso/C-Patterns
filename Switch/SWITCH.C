#include<stdio.h>
#include<conio.h>

void main() {
int i,n,j,k,Oper,cntr,strt,end;
clrscr();
printf("Shape Drawings: \n");
printf("[1] Draw Line \n");
printf("[2] Draw Stripe Line \n");
printf("[3] Draw Square \n");
printf("[4] Draw Parallelogram \n");
printf("[5] Draw Triangle \n");
printf("[6] Draw Reverse Triangle \n");
printf("[7] Draw Isoceles Triangle \n");
printf("[8] Draw Reverse Isoceles Triangle \n");
printf("[9] Draw HourGlass \n");
printf("[10] Draw Diamond \n");
printf("[11] Draw Zero \n");
printf("[12] Draw Arrow Up \n");
printf("[13] Draw Arrow Down \n");
printf("[14] Draw X \n");
printf("[15] Draw BowTie \n");
printf("Select a number of oper: \n");
scanf("%i",&Oper);

printf("Enter a number: \n");
scanf("%i",&n);
switch (Oper) {
    case 1:
        // Line
        for (i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
        break;

    case 2:
        // Stripe Line
        for (i = 0; i < n; i++) {
            if (i % 2 == 0)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
        break;

    case 3:
        // Square
        for ( i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case 4:
        // Parallelogram
        for (i = 0; i < n; i++) {
            for (j = 0; j < i; j++) {
                printf("_ ");
            }
            for (k = 0; k < n; k++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case 5:
         //Triangle      
for(i=1;i<=n;i++){

  for(j=1;j<=n;j++){
    if(j>=n-(i-2) && j<=n+(i-2)){
       printf("_ ");
    }
    else{
       printf("* ");
    }
 }
 printf("\n");

 }
break;
  
    case 6:
         // Reverse Triangle
         for(i=1;i<=n;i++){

  for(j=1;j<=n;j++){
    if(j<=i){
       printf("* ");
    }
    else{
       printf("_ ");
    }
 }
 printf("\n");

 }
 break;

    case 7:
        // Isosceles Triangle
        cntr=((n-1)/2)+1;
strt=cntr;
end=cntr;

for(i=1;i<=n;i++){

  for(j=1;j<=n;j++){
    if(j>=strt && j<=end){
       printf("* ");
    }
    else{
       printf("_ ");
    }
 }
 printf("\n");

    if(i<cntr){
       strt--; end++;
    }
    else{
    }
}
break;

    case 8:
        // Reverse Isosceles Triangle
        strt=n/n;
end=n;

for(i=1;i<=n;i++){

  for(j=1;j<=n;j++){
    if(j>=strt && j<=end){
       printf("* ");
    }
    else{
       printf("_ ");
    }
 }
 printf("\n");

    if(strt<end){
       strt++; end--;
    }
    else if(strt>end){
       strt--; end++;
    }
    else{
    }
}
    break;
        
    case 9:
        // Hourglass
        cntr=((n-1)/2)+1;
        strt=n/n;
        end=n;

       for(i=1;i<=n;i++){

       for(j=1;j<=n;j++){

       if(j>=strt && j<=end){
       printf("* ");
    }
       else{
       printf("_ ");
    }
    }
       printf("\n");

       if(i<cntr){
       strt++; end--;
    }
       else{
       if(i>=cntr){
       strt--; end++;
       }
       }
       }      
        break;

    case 10:
        // Diamond
        cntr=((n-1)/2)+1;
        strt=cntr;
        end=cntr;

       for(i=1;i<=n;i++){
       for(j=1;j<=n;j++){
       if(j>=strt && j<=end){
       printf("* ");
       }
      else{
      printf("_ ");
      }
      }
      printf("\n");

      if(i<cntr){
      strt--; end++;
       }
      else{
      strt++; end--;
      }
      }
      break;
     
    case 11:
        // Zero
        for ( i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    printf("* ");
                else
                    printf("_ ");
            }
            printf("\n");
        }
        break;

    case 12:
        // Arrow Up
        break;

    case 13:
        // Arrow Down
        break;

    case 14:
        // X
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == j || j == (n - i - 1))
                    printf("* ");
                else
                    printf("_ ");
            }
            printf("\n");
        }
        break;

    case 15:
        // Bowtie
        cntr=((n-1)/2)+1;
strt=n/n;
end=n;

for(i=1;i<=n;i++){

  for(j=1;j<=n;j++){

    if(j>strt && j<end){
       printf("_ ");
    }
    else{
       printf("* ");
    }
 }
 printf("\n");

    if(i<cntr){
       strt++; end--;
    }
    else{
    if(i>=cntr){
       strt--; end++;


}
}
}
    break;

    default:
        printf("Invalid Operation\n");
        break;
}
getch();
}