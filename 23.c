#include <stdio.h>
int main (){


// int sum=0 ;
// for (int i = 1 ; i <=10 ; i++){
//      sum = 8*i + sum;
//      }
// printf ("%d",sum);




int n;
int factorial=1;
printf ("enter your number");
scanf ("%d",&n);

// if (n<0){
//     printf ( "this is not possible");
// }

for(int i =1;i<=n;i++){
    factorial = factorial*i;
}
printf("%d",factorial);










    return 0;
}